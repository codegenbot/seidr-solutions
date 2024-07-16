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

    // Count characters in the code
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            int codeCount = 0;
            for (char d : codeStr) {
                if (d == c) {
                    codeCount++;
                }
            }
            int guessCount = 0;
            for (int i = 0; i < 4; i++) {
                if (guessStr[i] == c) {
                    guessCount++;
                }
            }
            whitePegs += std::min(codeCount, guessCount);
        }
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}