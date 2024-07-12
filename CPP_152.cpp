#include <vector>
#include <algorithm>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(const std::std::vector<int>& game, const std::std::vector<int>& guess) {
    std::std::vector<int> result(game.size());
    std::transform(game.begin(), game.end(), guess.begin(), result.begin(),
                   [](int g, int gu) { return std::abs(g - gu); });
    return result;
}