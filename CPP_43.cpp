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
    std::vector<int> test1 = {1, 2, 3, -3};
    std::vector<int> test2 = {4, -4, 5, 6};
    
    std::cout << pairs_sum_to_zero(test1) << std::endl; // Output: 1 (true)
    std::cout << pairs_sum_to_zero(test2) << std::endl; // Output: 0 (false)
    
    return 0;
}