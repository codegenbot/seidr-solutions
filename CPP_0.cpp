```cpp
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {0.5, 0.6, 0.7, 0.8, 1.2};
    if (has_close_elements(a, 0.1)) {
        std::cout << "The elements are close." << std::endl;
    } else {
        std::cout << "The elements are not close." << std::endl;
    }
    return 0;
}