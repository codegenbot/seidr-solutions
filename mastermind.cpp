#include <iostream>
#include <string>
#include <map>

int main() {
    std::string codeStr, guessStr;

    // Read user input
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;

    std::cout << "Enter your guess: ";
    std::cin >> guessStr;

    int blackPegs = 0;
    std::map<char, size_t> codeCount;

    // Count characters in the code
    size_t count = 1;
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            if (codeCount.find(c) == codeCount.end()) {
                codeCount[c] = count++;
            }
        }
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    int whitePegs = 0;
    std::vector<char> codeVector(codeStr.begin(), codeStr.end());
    for (char c : guessStr) {
        bool foundInCode = false;
        for (char d : codeVector) {
            if (d == c) {
                foundInCode = true;
                break;
            }
        }
        if (!foundInCode) {
            whitePegs++;
        } else {
            bool foundInCodeAtCorrectPosition = false;
            for (int j = 0; j < 4; j++) {
                if (codeStr[j] == c && codeVector[j] == c) {
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