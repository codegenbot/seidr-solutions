#include <vector>

bool issame(const vector<int>& game, const vector<int>& guess){
    return game == guess;
}

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        if(game[i] == guess[i]){
            result.push_back(0);
        }
        else{
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}