vector<int> compare(vector<int> game,vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}