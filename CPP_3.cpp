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

int main() {
    std::vector<int> input = {1, -2, 2, -2, 5, -5, 4, -4};
    run_test_case(input);

    std::vector<int> input2 = {1, 2, 3, 4, 5};
    run_test_case(input2);

    return 0;
}