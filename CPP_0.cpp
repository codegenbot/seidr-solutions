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
    std::vector<float> numbers = {10.0f, 20.0f, 30.0f};
    float threshold = 5.0f;
    if (has_close_elements(numbers, threshold)) {
        std::cout << "The elements are close.\n";
    } else {
        std::cout << "The elements are not close.\n";
    }
    return 0;
}