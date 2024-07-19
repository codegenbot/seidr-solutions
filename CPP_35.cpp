#include <vector>
#include <algorithm>
#include <cmath>

int max_value(std::vector<int> l) {
    std::vector<float> v = l; 
    return *std::max_element(v.begin(), v.end());
}