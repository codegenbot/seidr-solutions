vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    
    for (int i = 0; i < game.size(); i++) {
        int difference = abs(game[i] - guess[i]);
        result.push_back(difference);
    }
    
    return result;
}