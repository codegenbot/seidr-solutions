#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

float max_element(const std::vector<float>& l) {
    float max = l[0];
    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}

int main() {
    std::vector<float> numbers = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    float result = max_element(numbers);
    std::cout << result << std::endl;
    return 0;
}