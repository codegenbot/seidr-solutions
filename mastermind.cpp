#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string codeStr, guessStr;

    // Read user input
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;

    std::cout << "Enter your guess: ";
    std::cin >> guessStr;

    int blackPegs = 0;
    int whitePegs = 0;
    std::unordered_map<char, int> codeCount;

    // Count characters in the code
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c]++;
        }
    }

    // Count black and white pegs
    for (int i = 0; i < 4; ++i) {
        char guessChar = guessStr[i];
        if ('0' <= guessChar && guessChar <= '5') {
            if (guessChar == codeStr[i]) {
                blackPegs++;
            } else {
                bool foundInCode = false;
                for (char c : codeCount) {
                    if (c.second > 0) {
                        foundInCode = true;
                        break;
                    }
                }
                if (!foundInCode) {
                    whitePegs++;
                } else {
                    codeCount[guessChar]--;
                    if (codeStr[i] == guessChar) {
                        blackPegs++;
                        whitePegs--;
                    }
                }
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}