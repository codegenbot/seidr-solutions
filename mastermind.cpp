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
    
    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    int codeCount[6] = {0};
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (codeStr[j] == guessStr[i]) {
                codeCount[codeStr[j] - '0']++; // increment the count of the character
                found = true;
                break;
            }
        }
    }

    // Count white pegs
    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeCount[i], guessStr.count(std::string(1, '0' + i)));
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}