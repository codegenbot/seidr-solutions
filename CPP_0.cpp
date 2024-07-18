#include <iostream>
#include <vector>
#include <algorithm>

bool has_close_elements(std::vector<float>& numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    // Sample input to test the function
    std::vector<float> numbers = {1.1, 2.2, 3.3, 4.4};
    float threshold = 1.0;

    if (has_close_elements(numbers, threshold)) {
        std::cout << "Close elements found within the threshold." << std::endl;
    } else {
        std::cout << "No close elements found within the threshold." << std::endl;
    }

    return 0;
}