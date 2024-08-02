#include <vector>
#include <algorithm>
#include <cassert>

template <typename T>
bool has_close_elements(const std::vector<T>& numbers, const T& threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers = {3, 7, 1, 9, 5};
    int threshold = 2;

    assert(has_close_elements(numbers, threshold));

    std::cout << "Type of threshold: " << typeid(threshold).name() << std::endl;
    std::cout << "Type of numbers[0]: " << typeid(numbers[0]).name() << std::endl;

    return 0;
}