#include <vector>
#include <algorithm>

using namespace std;

bool isSame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    vector<int> same;
    
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            same.push_back(1);
            result.push_back(0);
        } else {
            int diff = abs(guess[i] - game[i]);
            same.push_back(0);
            result.push_back(diff);
        }
    }
    
    return result;
}