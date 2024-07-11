```cpp
#include <algorithm>
#include <vector>

std::vector<std::pair<int, int>> p = {{5, 3}, {-5, 2}, {-3, 3}, {9, 0}, {124, 1}, {-10, 12}};

auto max_pair = *std::max_element(p.begin(), p.end(), 
                                 [](const auto& a, const auto& b) {
                                     return a.second < b.second;
                                 });