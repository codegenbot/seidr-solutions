```cpp
int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::map<char, int> colorMap; 
    std::vector<std::pair<char, int>> placementArray; 

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { 
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) { 
            white++;
            colorMap[code[i]]++; 
        }
    }

    for (auto& pair : colorMap) {
        placementArray.push_back(pair); 
    }

    int correctPlacement = std::count(placementArray.begin(), placementArray.end(), std::make_pair('?', 4)); 

    black -= correctPlacement; 

    return black;
}