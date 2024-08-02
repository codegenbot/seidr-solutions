#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<float> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    float maxVal = *std::max_element(l.begin(), l.end());
    return static_cast<int>(abs(maxVal-12.4)<1e-4);
}