std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else if (abs(game[i] - guess[i]) == game.size() - i - 1) {
            result.push_back(2);
        } else if (abs(game[i] - guess[i]) == 1) {
            result.push_back(1);
        }
    }
    return result;
}