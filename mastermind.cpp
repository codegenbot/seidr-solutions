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
    std::unordered_map<char, int> codeCount;

    // Count characters in the code
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c]++;
            if (c == guessStr[0] || c == guessStr[1] || c == guessStr[2] || c == guessStr[3]) {
                blackPegs++;
            }
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