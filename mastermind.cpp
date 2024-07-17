```cpp
#include <string>
#include <algorithm> 
#include <map>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::map<char, int> colorMap; 
    std::map<char, int> placementMap; 

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { 
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) { 
            white++;
            colorMap[code[i]]++; 
        }
    }

    for (auto& pair : colorMap) {
        placementMap[pair.first] = pair.second; 
    }

    int blackCount = 0;
    for (const auto& pair : placementMap) {
        if (pair.second == 4) {
            blackCount++;
        }
    }
    black -= blackCount;

    return black;
}