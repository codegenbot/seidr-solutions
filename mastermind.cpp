#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    int white = 0, black = 0;
    std::map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++codeFreq[code[i]];
            ++guessFreq[guess[i]];
        }
    }

    for (auto& it : codeFreq) {
        white += std::min(it.second, guessFreq[it.first]);
        guessFreq[it.first] -= it.second; // Adjust frequency for characters counted for white pegs
    }

    for (auto& it : guessFreq) {
        white += std::min(it.second, codeFreq[it.first]);
    }

    std::cout << white << std::endl << black << std::endl;
    
    return 0;
}