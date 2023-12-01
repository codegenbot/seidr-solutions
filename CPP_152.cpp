#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    // Declare compare function
    vector<int> compare(vector<int> game, vector<int> guess);

    // Tests
    assert(issame(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
    assert(issame(compare({1,2,3,5},{1,2,3,4}), {0,0,0,1}));

    return 0;
}