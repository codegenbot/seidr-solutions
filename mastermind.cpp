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

    int correctColors = 0;
    for (const auto& pair : colorMap) {
        if (pair.second == 1) {
            correctColors++;
        }
    }
    white -= correctColors;

    return black + white;
}