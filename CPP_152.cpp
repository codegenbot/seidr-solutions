#include <vector>
#include <algorithm>
#include <numeric>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> compare(std::vector<int>& game, std::vector<int>& guess) {
    std::vector<int> result(game.size());
    std::transform(game.begin(), game.end(), guess.begin(), result.begin(),
                   [](int g, int gu) { return std::abs(g - gu); });
    std::vector<int> sortedResult = result;
    std::sort(sortedResult.begin(), sortedResult.end());
    int sum = std::accumulate(sortedResult.begin(), sortedResult.end(), 0);
    return {sortedResult.front(), sortedResult.back(), sum};
}