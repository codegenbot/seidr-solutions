#include <vector>
#include <numeric>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    std::transform(game.begin(), game.end(), guess.begin(), std::back_inserter(result),
                   [](int g, int h) { return std::abs(g - h); });
    return result;
}