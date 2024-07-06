#include <vector>

bool issame(vector<int> a,vector<int> b) {
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if(issame({game[i],guess[i]},{1,2}) || issame({game[i],guess[i]},{3,4})) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}