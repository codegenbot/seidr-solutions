```cpp
#include <iostream>
#include <string>

int main() {
    std::string codeStr, guessStr;

    // Read user input
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;

    std::cout << "Enter your guess: ";
    std::cin >> guessStr;

    int blackPegs = 0, whitePegs = 0;
    int codeCount[6] = {0};

    // Count characters in the code
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c - '0']++;
        }
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; i++) {
        bool foundInCode = false;
        for (int j = 0; j < 4; j++) {
            if (codeStr[j] == guessStr[i]) {
                foundInCode = true;
                break;
            }
        }
        if (!foundInCode) {
            whitePegs++;
        } else {
            bool foundInCodeAtCorrectPosition = false;
            for (int j = 0; j < 4; j++) {
                if (codeStr[j] == guessStr[i]) {
                    foundInCodeAtCorrectPosition = true;
                    break;
                }
            }
            if (!foundInCodeAtCorrectPosition) {
                whitePegs++;
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}