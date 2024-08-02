#include <iostream>
#include <vector>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 4.6, 2.8};
    float threshold = 0.5;
    if (has_close_elements(numbers, threshold)) {
        std::cout << "The vector has close elements based on the threshold." << std::endl;
    } else {
        std::cout << "The vector does not have close elements based on the threshold." << std::endl;
    }
    return 0;
}