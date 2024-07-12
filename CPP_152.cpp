#include <vector>
bool issame(vector<int> a,vector<int>b){
    for(int i = 0; i < a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    if(issame(game,guess)){
        for (int i = 0; i < game.size(); i++) {
            result.push_back(2);
        }
    } else {
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
    }
    return result;
}