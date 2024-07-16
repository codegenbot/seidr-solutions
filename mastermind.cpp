#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string codeStr, guessStr;
    
    // Read user input...
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;
    std::cout << "Enter the guess: ";
    std::cin >> guessStr;

    int blackPegs = 0;
    int whitePegs = 0;
    std::unordered_map<int, int> codeCount;

    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[static_cast<int>(c)]++;
        }
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        char codeChar = codeStr[i];
        char guessChar = guessStr[i];
        if (codeChar == guessChar) {
            blackPegs++;
        }
    }

    // Count white pegs
    for (char c : guessStr) {
        if ('0' <= c && c <= '5') {
            if (codeCount[static_cast<int>(c)] > 0) {
                codeCount[static_cast<int>(c)]--;
                whitePegs++;
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}