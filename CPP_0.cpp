```cpp
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    float a[] = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<float> vec(a, a + sizeof(a) / sizeof(a[0]));
    if (has_close_elements(vec, 0.1)) {
        std::cout << "Array has close elements." << std::endl;
    } else {
        std::cout << "Array does not have close elements." << std::endl;
    }
}