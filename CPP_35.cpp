#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float max_element(std::vector<float> l) {
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int main() {
    std::vector<float> input = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    float result = max_element(input);
    std::cout << result << std::endl;
    return 0;
}