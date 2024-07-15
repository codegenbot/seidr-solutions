#include <vector>
#include <cassert>

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> difference;
    for (int i = 0; i < game.size(); ++i) {
        difference.push_back(abs(game[i] - guess[i]));
    }
    return difference;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}