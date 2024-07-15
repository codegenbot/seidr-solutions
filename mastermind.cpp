#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    if (code.length() != 4 || guess.length() != 4) {
        return 1;
    }
    
    for (char c : code) {
        if (c < 'A' || c > 'F') {
            return 1;
        }
    }
    
    for (char c : guess) {
        if (c < 'A' || c > 'F') {
            return 1;
        }
    }
    
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
    }

    std::cout << white << "\n" << black << "\n";
    
    return 0;
}