```cpp
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers = {0.5, 0.4, 0.3, 0.2, 0.1};
    float threshold = 0.05;
    if (has_close_elements(numbers, threshold)) {
        std::cout << "There are close elements in the vector." << std::endl;
    } else {
        std::cout << "There are no close elements in the vector." << std::endl;
    }
    return 0;
}