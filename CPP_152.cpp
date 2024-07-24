#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

assert(issame(compare({1, 2, 3}, {2, 3, 4}), {1, 1, 1}));
assert(issame(compare({5, 5, 5}, {1, 2, 3}), {4, 3, 2}));