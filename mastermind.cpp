#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;
    std::map<char, int> codeFreq, guessFreq;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (auto it = codeFreq.begin(); it != codeFreq.end(); ++it) {
        whitePegs += std::min(it->second, guessFreq[it->first]);
    }

    std::cout << whitePegs << std::endl << blackPegs << std::endl;

    return 0;
}