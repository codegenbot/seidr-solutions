#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}