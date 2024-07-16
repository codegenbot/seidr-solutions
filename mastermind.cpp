#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string codeStr;
    std::cin >> codeStr; // Read 4-character string
    std::string guessStr;
    std::cin >> guessStr; // Read another 4-character string

    int blackPegs = 0, whitePegs = 0;
    std::unordered_map<char, int> codeCount;

    for (char c : codeStr) {
        if ('0' <= c && c <= '5') {
            codeCount[c]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        char c = guessStr[i];
        if ('0' <= c && c <= '5') {
            if (codeCount.find(c) != codeCount.end()) {
                auto& count = codeCount[c];
                if (count > 1) {
                    blackPegs++;
                    codeCount[c]--;
                } else {
                    whitePegs++;
                    codeCount.erase(c);
                }
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