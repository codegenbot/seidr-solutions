#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<float> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    vector<float> v = l; 
    float maxVal = *std::max_element(v.begin(),v.end());
    return static_cast<int>(abs(maxVal-12.4)<1e-4);
}