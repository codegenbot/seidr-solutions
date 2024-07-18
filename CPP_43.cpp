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
    std::vector<int> test_case1 = {1, 2, 3, -3};
    std::vector<int> test_case2 = {4, -4, 5, 6};
    
    pairs_sum_to_zero(test_case1); // Should return true
    pairs_sum_to_zero(test_case2); // Should return false
    
    return 0;
}