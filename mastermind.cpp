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

    if (codeStr.length() != 4 || guessStr.length() != 4) {
        std::cout << "Error: Code and guess must be 4 characters long." << std::endl;
        return 1;
    }

    int blackPegs = 0;
    int whitePegs = 0;

    // Count correct characters at correct positions as black pegs
    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    // Count remaining correct characters as white pegs
    for (char c : guessStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c - '0'] = 0;
        }
    }

    int codeCount[6] = {0};

    // Count characters in the code
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c - '0']++;
        }
    }

    for (int i = 0; i < 4; i++) {
        char c = guessStr[i];
        if ('0' <= c && c <= '5') {
            if (codeCount[c - '0'] > 0) {
                codeCount[c - '0']--;
                whitePegs++;
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}