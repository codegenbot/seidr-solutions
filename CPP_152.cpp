#include <vector>
#include <algorithm>
#include <cmath>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return std::vector<int>(a) == std::vector<int>(b);
    }

    std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
        std::vector<int> result;
        std::transform(game.begin(), game.end(), guess.begin(), std::back_inserter(result),
                       [](int a, int b) { return std::abs(a - b); });
        return result;
    }
}