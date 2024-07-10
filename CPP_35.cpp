#include <iostream>
#include <vector>
#include <algorithm>

int maxValue(std::vector<int> l) {
    std::vector<float> v = (float)*l;
    return *std::max_element(v.begin(), v.end());
}