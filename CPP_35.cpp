#include <algorithm>
#include <vector>

int main() {
    std::vector<std::pair<int, int>> p = {{5, 3}, {-5, 2}, {3, -3}, {9, 0}, {124, 1}, {-10, 12}};
    auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    assert(std::abs(std::distance({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- max_pair->second)<1e-4);
}