#include <algorithm>
#include <vector>
#include <utility>

std::pair<int, int> findMaxPair(const std::vector<std::pair<int, int>>& p) {
    return *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
}

int main() {
    std::vector<std::pair<int, int>> p = {{5, 3}, {-5, 2}, {3, -3}, {9, 0}, {124, 1}, {-10, 3}};
    
    auto max_pair = findMaxPair(p);
    
    return 0;
}