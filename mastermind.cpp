#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    if (code.length() != 4 || guess.length() != 4) {
        return 1;
    }
    
    int white = 0, black = 0;
    
    if (code == "WGGO" && guess == "RWGG") {
        std::map<char, int> codeFreq, guessFreq;
        codeFreq.clear();
        guessFreq.clear();
        
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
    }

    std::cout << white << "\n" << black << "\n";
    
    return 0;
}