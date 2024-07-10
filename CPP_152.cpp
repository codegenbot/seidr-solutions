#include <vector>
#include <cassert>
#include <algorithm>
#include <cmath>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result(game.size());
    std::transform(game.begin(), game.end(), guess.begin(), result.begin(),
               [](int a, int b) { return std::abs(a - b); });
    return result;
}