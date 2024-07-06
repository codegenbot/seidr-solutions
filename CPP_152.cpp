#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame({game[i]}, {guess[i]})) {
            result.push_back(0);
        } else {
            int diff = abs(guess[i] - game[i]);
            if (diff > 9) {
                result.push_back(-1);
            } else {
                result.push_back(diff);
            }
        }
    }
    return result;
}