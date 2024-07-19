#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    return {numbers[2], numbers[3]};
}

int main() {
    if (issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1f, 4.1f})) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }
    return 0;
}