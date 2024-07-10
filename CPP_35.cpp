#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

float maxVal(std::vector<float> l) {
    std::vector<float> v = l; 
    return *std::max_element(v.begin(), v.end());
}