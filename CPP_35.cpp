#include <algorithm>
#include <vector>
#include <utility>

int main() {
    std::vector<std::pair<int, int>> p = {{5, 3}, {-5, 2}, {3, -3}, {9, 0}, {124, 1}, {-10, 3}};
    
    auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    
    assert (abs(std::max_element(p.begin(), p.end())- std::make_pair(124,1)))<1e-4);
}