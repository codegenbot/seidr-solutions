#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> result(game.size());
    transform(game.begin(), game.end(), guess.begin(), result.begin(),
              [](int a, int b) { return abs(a - b); });
    return result;
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}