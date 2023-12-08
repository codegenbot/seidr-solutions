```
#include <iostream>
#include <string>
#include <vector>

std::pair<int, int> getClues(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    std::vector<int> codeCount(6, 0);
    std::vector<int> guessCount(6, 0);
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeCount[i], guessCount[i]);
    }
    
    return std::make_pair(whitePegs, blackPegs);
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    
    std::pair<int, int> clues = getClues(code, guess);
    
    std::cout << clues.first << std::endl;
    std::cout << clues.second << std::endl;
    
    return 0;
}
```