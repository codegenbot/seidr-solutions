```cpp
#include <algorithm>
#include <vector>
#include <utility>

int max_value_function() {
    std::vector<std::pair<int, int>> p;
    while (true) {
        int x, y;
        std::cin >> x >> y;
        if (!std::cin) break;
        p.push_back({x, y});
    }
    
    auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    
    int max_value = std::get<0>(max_pair);
    int min_value = *std::min_element(p.begin(), p.end())->first;
    
    std::cout << "Maximum value: " << max_value << std::endl;
    std::cout << "Minimum value: " << min_value << std::endl;
}