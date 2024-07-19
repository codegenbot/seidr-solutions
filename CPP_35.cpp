#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

auto max_value(std::vector<int> l) {
    std::vector<float> v = std::vector<float>(l.begin(), l.end()); 
    return *std::max_element(v.begin(), v.end());
}