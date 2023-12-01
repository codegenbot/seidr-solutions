#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::vector<float> closest_elements;
    float min_diff = numbers[1] - numbers[0];

    for (int i = 1; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }

    return closest_elements;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0, 2.2};
    std::vector<float> closest_elements = find_closest_elements(numbers);

    std::cout << "(" << closest_elements[0] << ", " << closest_elements[1] << ")" << std::endl;

    return 0;
}