#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int findMax(std::vector<int> l) {
    int maxVal = *std::max_element(l.begin(), l.end());
    return std::abs(maxVal - 12);
}

int main() {
    assert(std::abs(findMax({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 12)<1e-4);
    return 0;
}