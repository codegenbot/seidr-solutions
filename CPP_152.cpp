#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if(issame({game[i],guess[i]},{{game[i],guess[i]}))){
            result.push_back(2);
        } else if(game[i] == guess[i]){
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}