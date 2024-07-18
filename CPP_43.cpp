#include <iostream>
#include <vector>

bool pairs_sum_to_zero(std::vector<int> l) {
    for (size_t i = 0; i < l.size(); ++i) {
        for (size_t j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> test_case1 = {1, -1, 2, 3};
    std::vector<int> test_case2 = {4, -3, 2, -2};

    std::cout << std::boolalpha;
    std::cout << pairs_sum_to_zero(test_case1) << std::endl; // true
    std::cout << pairs_sum_to_zero(test_case2) << std::endl; // false

    return 0;
}