#include <vector>
bool issame(vector<int> a,vector<int>b); 
vector<int> compare(vector<int>, vector<int>); 

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            if(guess[i]>game[i])
                result.push_back(2);
            else
                result.push_back(1);
        }
    }
    return result;
}