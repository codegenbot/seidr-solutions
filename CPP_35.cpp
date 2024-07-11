```
#include <algorithm>
#include <vector>

int max_value = -1;
int min_value = INT_MAX;

std::vector<std::pair<int, int>> p;
for (int i = 0; i < 6; ++i) {
    int x, y;
    std::cin >> x >> y;
    p.push_back({x, y});
}

auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
    return a.second < b.second;
});

min_value = *std::min_element(p.begin(), p.end())->first;

std::cout << "Maximum value: " << std::get<1>(max_pair) << std::endl;
std::cout << "Minimum value: " << min_value << std::endl;