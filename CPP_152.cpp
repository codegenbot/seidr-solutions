#include <vector>
#include <cassert>
#include <algorithm>
#include <cmath>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    std::transform(game.begin(), game.end(), guess.begin(), std::back_inserter(result),
                   [](int a, int b) { return std::abs(a - b); });
    return result;
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}