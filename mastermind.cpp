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
        }
    }

    int whitePegs = 0;
    for (int i = 0; i < 4; i++) {
        char c = guessStr[i];
        if ('0' <= c && c <= '5') {
            bool foundInCode = codeCount[c] > 0;
            codeCount[c]--;
            if (foundInCode) {
                blackPegs++;
            } else {
                whitePegs++;
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}