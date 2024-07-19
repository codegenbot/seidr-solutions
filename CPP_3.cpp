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

int main() {
    std::vector<int> input = {1, -2, 2, -2, 5, -5, 4, -4};
    bool result = below_zero(input);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}