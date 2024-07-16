```cpp
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string codeStr, guessStr;

    // Read user input
    std::cout << "Enter the Mastermind code: ";
    std::cin >> codeStr;

    std::cout << "Enter your guess: ";
    std::cin >> guessStr;

    int blackPegs = 0, whitePegs = 0;
    int codeCount[6] = {0};

    // Count characters in the code
    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c - '0']++;
        }
    }

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (codeStr[i] == guessStr[i]) {
            blackPegs++;
        }
    }

    // Count white pegs
    int codeCountTemp[6] = {0};
    for (char c : guessStr) {
        if ('0' <= c && c <= '5') {
            codeCountTemp[c - '0'] += std::count(codeStr.begin(), codeStr.end(), c);
        }
    }

    whitePegs = 4 - blackPegs;
    for (int i = 0; i < 6; i++) {
        whitePegs -= codeCount[i];
    }
    whitePegs += std::min(codeCountTemp[0], codeCount[0]);
    whitePegs += std::min(codeCountTemp[1], codeCount[1]);
    whitePegs += std::min(codeCountTemp[2], codeCount[2]);
    whitePegs += std::min(codeCountTemp[3], codeCount[3]);
    whitePegs += std::min(codeCountTemp[4], codeCount[4]);
    whitePegs += std::min(codeCountTemp[5], codeCount[5]);

    // Print the result
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;

    return 0;
}