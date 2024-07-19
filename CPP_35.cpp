#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int findMaxElement(const std::vector<int>& l) {
    std::vector<float> v;
    for (auto i : l) {
        v.push_back((float)i);
    }
    return *std::max_element(v.begin(), v.end());
}

int main() {
    assert(std::abs(findMaxElement({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}