#include <vector>

bool issame(vector<int> game,vector<int> guess){
    for(int i=0; i<game.size(); i++){
        if(game[i] != guess[i]){
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game,vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        if(issame(game, guess)){
            result.push_back(0);
        }
        else{
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}