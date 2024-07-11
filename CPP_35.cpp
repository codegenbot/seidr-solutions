```cpp
#include <initializer_list>
#include <algorithm>
#include <iostream>
#include <vector>

int maximumValue(std::vector<std::pair<int, int>> p) {
    auto max_pair = *std::max_element(p.begin(), p.end(),
                                         [](const auto& a, const auto& b) {
                                             return a.second < b.second;
                                         });

    return std::get<1>(max_pair);
}

int minimumValue(std::vector<std::pair<int, int>> p) {
    return *std::min_element(p.begin(), p.end())->first;
}

int myMain() {
    int max_value = -1;
    int min_value = INT_MAX;

    std::vector<std::pair<int, int>> p;

    for (int i = 0; i < 6; ++i) {
        int x, y;
        std::cin >> x >> y;
        p.push_back({x, y});
    }

    max_value = maximumValue(p);

    min_value = minimumValue(p);

    std::cout << "Maximum value: " << max_value << std::endl;
    std::cout << "Minimum value: " << min_value << std::endl;

    return 0;
}

int main() {
    myMain();
}