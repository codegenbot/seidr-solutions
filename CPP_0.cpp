#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<int>& numbers, int threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers = {3, 1, 7, 5, 2};
    int threshold = 2;
    std::cout << std::boolalpha << has_close_elements(numbers, threshold) << std::endl;
    return 0;
}