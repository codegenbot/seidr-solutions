```cpp
#include <algorithm>
#include <vector>

void max_value_function() {
    std::vector<std::pair<int, int>> p;
    for (int i = 0; i < 6; ++i) {
        int x, y;
        std::cin >> x >> y;
        p.push_back(std::make_pair(x, y));
    }
    
    auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    
    int max_value = std::get<1>(max_pair);
    int min_value = (*std::min_element(p.begin(), p.end()))->first;
    
    std::cout << "Maximum value: " << max_value << std::endl;
    std::cout << "Minimum value: " << min_value << std::endl;
}