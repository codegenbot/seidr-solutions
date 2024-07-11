#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    assert(game.size() == guess.size());
    return issame(game, guess) ? vector<int>(game.size(), 0) : vector<int>(game.size(), 1);
}