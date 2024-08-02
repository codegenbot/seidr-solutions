#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

template <typename T>
bool has_close_elements(const std::vector<T>& numbers, const T& threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int threshold = 2;

    std::cout << "Type of numbers: " << typeid(numbers).name() << std::endl;
    std::cout << "Type of threshold: " << typeid(threshold).name() << std::endl;

    std::cout << "Result: " << has_close_elements(numbers, threshold) << std::endl;

    return 0;
}