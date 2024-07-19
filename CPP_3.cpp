#include <iostream>
#include <vector>
#include <cassert>

bool below_zero(const std::vector<int>& arr) {
    for (int num : arr) {
        if (num < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> input = {1, -2, 2, -2, 5, -5, 4, -4};
    bool result = below_zero(input);
    std::cout << std::boolalpha << result << std::endl;

    std::vector<int> input2 = {1, 2, 3, 4, 5};
    bool result2 = below_zero(input2);
    std::cout << std::boolalpha << result2 << std::endl;

    return 0;
}