#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    int black = 0, white = 0;
    
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else if (issame({game[i]}, {guess[i]})) {
            black++;
            result.push_back(-1);
        } else {
            white++;
            result.push_back(1);
        }
    }
    
    return result;
}