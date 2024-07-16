#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

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
    for (char c : guessStr) {
        if ('0' <= c && c <= '5') {
            bool foundInCode = codeCount[c] > 0;
            codeCount[c]--;
            if (!foundInCode) {
                whitePegs++;
            } else {
                bool foundInCodeAtCorrectPosition = false;
                for (int j = 0; j < 4; j++) {
                    if (codeStr[j] == c) {
                        foundInCodeAtCorrectPosition = true;
                        break;
                    }
                }
                if (!foundInCodeAtCorrectPosition) {
                    whitePegs++;
                }
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}