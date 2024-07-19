#include <iostream>
#include <vector>

bool below_zero(const std::vector<int>& arr) {
    for (int num : arr) {
        if (num < 0) {
            return true;
        }
    }
    return false;
}

void run_test_case(const std::vector<int>& input) {
    bool result = below_zero(input);
    std::cout << std::boolalpha << result << std::endl;
}