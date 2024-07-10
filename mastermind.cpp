#include <string>
#include <iostream>

struct PegCounts { int white; int black; };

PegCounts mastermind(std::string code, std::string guess) {
    PegCounts result = {0, 0};
    std::string remainingGuess = guess;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            result.black++;
            remainingGuess[i] = ' ';
        }
    }

    // Count white pegs
    int codeCount[6] = {0}; 
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            codeCount[guess[i] - 'A']--;
            if (codeCount[guess[i] - 'A'] == 0) {
                codeCount[guess[i] - 'A'] = -1;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (remainingGuess[i] != ' ') {
            if (codeCount[code[i] - 'A'] > 0) {
                result.white++;
                codeCount[code[i] - 'A']--;
            } else if (codeCount[guess[i] - 'A'] == -1) {
                result.black++;
            }
        }
    }

    return result;
}

int main() {
    std::string code = "ABCD";
    for(int i=0; i<4; i++) {
        code += (i % 2 + 1) + 'A';
    }
    std::string guess;
    for(int i=0; i<4; i++) {
        guess += (i % 2) + 'B'; 
    }
    PegCounts result = mastermind(code, guess);
    std::cout << "White pegs: " << result.white << ", Black pegs: " << result.black << std::endl;
    return 0;
}