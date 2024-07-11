#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int,int>> p = {{5, 3}, {-5, 2}, {-3, 3}, {9, 0}, {124, 1}, {-10, 12}};

    auto max_pair = *std::max_element(p.begin(), p.end(),
                                        [](const std::pair<int,int>& a, const std::pair<int,int>& b) {
                                            return a.first < b.first;
                                        });

    return 0;
}