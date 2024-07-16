```cpp
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
    std::unordered_map<char, int> codeCount;

    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        char codeChar = codeStr[i];
        char guessChar = guessStr[i];

        if (codeChar == guessChar) {
            blackPegs++; 
        } else if ('0' <= guessChar && guessChar <= '5') {
            if (codeCount[guessChar] > 0) { 
                codeCount[guessChar]--;
                whitePegs++; 
            }
        }
    }

    for (auto& pair : codeCount) {
        if (pair.second > 0) {
            whitePegs += pair.second; 
            pair.second = 0; 
        }
    }

    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}