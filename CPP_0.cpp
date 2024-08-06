#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); i++) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    std::cout << std::boolalpha << has_close_elements(a, 0.5f);

    return 0;
}