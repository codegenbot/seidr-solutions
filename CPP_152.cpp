Here is the completed code:

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result(game.size());
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result[i] = 0;
        } else {
            result[i] = abs(guess[i] - game[i]);
        }
    }
    return result;
}