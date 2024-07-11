#include <algorithm>
#include <vector>

int findMaxPair(const std::vector<std::pair<int, int>>& p) {
    auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    return max_pair.first;
}