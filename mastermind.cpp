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

    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[static_cast<int>(c)]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        char guessChar = guessStr[i];
        if ('0' <= guessChar && guessChar <= '5') {
            if (--codeCount[static_cast<int>(guessChar)] > 0) {
                whitePegs++;
            } else {
                blackPegs++;
            }
        }
    }

    // Counting black pegs
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            int index = guessStr.find(c);
            while(index != std::string::npos) {
                blackPegs++;
                guessStr.erase(index, 1);
                index = guessStr.find(c);
            }
        }
    }

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs - blackPegs << std::endl;

    return 0;
}