#include <iostream>
#include <algorithm>
#include <vector>

float findMax(std::vector<int> l) {
    std::vector<float> v = {(float)l[0], (float)l[1], (float)l[2], (float)l[3], (float)l[4], (float)l[5], (float)l[6], (float)l[7], (float)l[8], (float)l[9]};
    return *std::max_element(v.begin(), v.end());
}

int main() {
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::cout << findMax(l) << std::endl;
    return 0;
}