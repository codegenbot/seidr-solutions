vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> results;
    for (int i = 0; i < game.size(); ++i) {
        if (game[i] == guess[i]) {
            results.push_back(0);
        } else {
            results.push_back(abs(game[i] - guess[i]));
        }
    }
    return results;
}