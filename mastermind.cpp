```cpp
#include <string>
#include <iostream>

struct PegCounts { int white; int black; };

PegCounts mastermind(std::string code, std::string guess) {
    PegCounts result = {0, 0};
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            result.black++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }

    int codeCount[6] = {0}, guessCount[6] = {0};
    for(int i=0; i<4; i++) {
        if(code[i] != ' ') {
            codeCount[code[i]-'A']++;
        }
        if(guess[i] != ' ') {
            guessCount[guess[i]-'B']++;
        }
    }

    for(int i=0; i<6; i++) {
        if(codeCount[i] > 0) {
            result.white += codeCount[i];
        }
    }

    for(int i=0; i<4; i++) {
        if(guess[i] != ' ') {
            if(guessCount[guess[i]-'B'] > 0) {
                result.black++;
                guessCount[guess[i]-'B']--;
            }
        }
    }

    return result;
}

int main() {
    std::string code = "ABCD";
    std::string guess = "";
    for(int i=0; i<4; i++) {
        guess += 'B'; // or any other valid character
    }
    PegCounts result = mastermind(code, guess);
    std::cout << "White pegs: " << result.white << ", Black pegs: " << result.black << std::endl;
    return 0;
}