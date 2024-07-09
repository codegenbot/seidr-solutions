bool issame(vector<vector<int>> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i][0] != guess[0]) return false;
    }
    return true;
}