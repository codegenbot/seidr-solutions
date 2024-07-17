int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::map<char, int> colorMap; // correct colors regardless of position
    std::map<char, int> placementMap; // correct placements

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { // match and same position
            black++;
        } else if (std::count(guess.begin(), guess.end(), code[i]) > 0) { // match but not at same position
            white++;
            colorMap[code[i]]++; // count in colorMap
        }
    }

    for (auto& pair : colorMap) {
        placementMap[pair.first] = pair.second; // add to placementMap
    }

    int correctPlacements = 0;
    for (auto& pair : placementMap) {
        if (pair.second == 1) {
            correctPlacements++;
        }
    }
    black -= correctPlacements;

    return black;
}