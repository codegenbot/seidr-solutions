#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (std::fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    float threshold = 1.0;

    if(has_close_elements(a, threshold)) {
        std::cout << "Close elements found within threshold." << std::endl;
    } else {
        std::cout << "No close elements found within threshold." << std::endl;
    }

    return 0;
}