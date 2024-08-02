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
    if (!issame(game, guess))
        result.push_back(-1);
    else {
        int black = 0, white = 0;
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i])
                white++;
            else
                black++;
        }
        vector<int> output(2);
        output[0] = black;
        output[1] = white;
        return output;
    }
    return result;
}