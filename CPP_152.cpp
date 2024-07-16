#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> calculate_difference(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result(game.size());
    transform(game.begin(), game.end(), guess.begin(), result.begin(), [](int a, int b) { return std::abs(a - b); });
    return result;
}

int main() {
    std::vector<int> expected = {2, 0, 0, 1};
    assert(compare(calculate_difference({1, 2, 3, 5}, {-1, 2, 3, 4}), expected));
    return 0;
}