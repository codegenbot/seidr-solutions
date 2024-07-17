int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::map<char, int> colorMap; 
    std::map<char, int> placementMap; 

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { // match and same position
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) { // match but not at same position
            white++;
            colorMap[code[i]]++; 
        }
    }

    for (auto& pair : colorMap) {
        placementMap[pair.first] = pair.second; 
    }

    black -= std::count_if(placementMap.begin(), placementMap.end(), [](auto& pair){return pair.second == 4;});

    return black;
}