```cpp
#include <iostream>
#include <vector>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 1; i < numbers.size(); i++) {
        if (std::abs(numbers[i] - numbers[i-1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a(6);
    a[0] = 1.0f; a[1] = 2.0f; a[2] = 3.9f; a[3] = 4.0f; a[4] = 5.0f; a[5] = 2.2f;
    std::cout << (has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5) ? "true" : "false") << std::endl;
    return 0;
}