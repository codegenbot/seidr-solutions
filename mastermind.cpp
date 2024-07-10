#include <string>
#include <iostream>

struct PegCounts { int white; int black; };

PegCounts mastermind(std::string& code, std::string& guess) {
    PegCounts result = {0, 0};

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            result.black++;
            guess[i] = ' ';  // replace character in guess string with space
        }
    }

    // Count white pegs
    int codeCount[256] = {0};
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            codeCount[guess[i]]--;
            if (codeCount[guess[i]] == 0) {
                codeCount[guess[i]] = -1;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != ' ') {
            if (codeCount[code[i]] > 0) {
                result.white++;
                codeCount[code[i]]--;
            } else if (codeCount[guess[i]] == -1) {
                result.black++;
            }
        }
    }

    return result;
}

int main() {
    std::string code = "ABCD";
    std::string guess = "BCDE";
    PegCounts result = mastermind(code, guess);
    std::cout << "White pegs: " << result.white << ", Black pegs: " << result.black << std::endl;
    return 0;
}