```cpp
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

float findMaxElement(const std::vector<int>& l) {
    std::vector<float> v;
    for (auto i : l) {
        v.push_back((float)i);
    }
    return *std::max_element(v.begin(), v.end());
}

int main() {
    int l[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::cout << findMaxElement(l) << std::endl;
    return 0;
}