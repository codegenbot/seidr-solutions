```
#include <algorithm>
#include <vector>
#include <utility>

int main() {
    std::vector<std::pair<int, int>> p = {{5, 3}, {-5, 2}, {3, -3}, {9, 0}, {124, 1}, {-10, 3}};
    
    auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    
    int max_value = std::get<0>(max_pair);
    int min_value = *std::min_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.first > b.first;
    })->first;
    
    std::cout << "Maximum value: " << max_value << std::endl;
    std::cout << "Minimum value: " << min_value << std::endl;
}