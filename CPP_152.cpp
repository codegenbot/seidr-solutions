std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else if (issame({game[i], guess[i]}, {guess[i], game[i]})) {
            result.push_back(1);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}