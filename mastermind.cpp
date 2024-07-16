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

    int blackPegs = 0, whitePegs = 0;
    std::unordered_map<int, int> codeCount;
    int correctPositions = 0;

    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[static_cast<int>(c)] = 0; 
            codeCount[static_cast<int>(c)]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        char c = guessStr[i];
        if ('0' <= c && c <= '5') {
            if (codeCount.find(c - '0') != codeCount.end()) {
                auto& count = codeCount[c - '0'];
                if (count > 1) {
                    blackPegs++;
                    codeCount[c - '0']--;
                } else {
                    correctPositions++;
                    blackPegs++;
                }
            } else {
                whitePegs++;
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << (blackPegs + correctPositions) << std::endl;
    std::cout << "White pegs: " << whitePegs - (blackPegs + correctPositions) << std::endl;

    return 0;
}