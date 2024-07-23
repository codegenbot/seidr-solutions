vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> results;
    for (int i = 0; i < game.size(); ++i) {
        results.push_back(abs(game[i] - guess[i]));
    }
    return results;
}