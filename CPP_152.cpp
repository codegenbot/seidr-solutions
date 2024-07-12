#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result(game.size());
    std::transform(game.begin(), game.end(), guess.begin(), result.begin(),
                   [](int g, int gu) { return std::abs(g - gu); });
    std::vector<int> sortedResult = result;
    std::sort(sortedResult.begin(), sortedResult.end());
    int sum = std::accumulate(sortedResult.begin(), sortedResult.end(), 0);
    return {sortedResult.front(), sortedResult.back(), sum};
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {1, 1, 2}));
    return 0;
}