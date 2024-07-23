#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

float max_element(const std::vector<float>& l) {
    float max_val = *std::max_element(l.begin(), l.end());
    return max_val;
}

int main() {
    std::vector<float> input = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    float result = max_element(input);
    std::cout << result << std::endl;
    return 0;
}