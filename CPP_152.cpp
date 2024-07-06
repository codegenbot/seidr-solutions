#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if(issame({game[i]}, {guess[i]})){
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}