#include <iostream>
#include <vector>
#include <cassert>

bool pairs_sum_to_zero(const std::vector<int>& l) {
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
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    // Add more test cases using assert
    assert(pairs_sum_to_zero({1, -1, 2, -2}) == true);
    assert(pairs_sum_to_zero({0, 0, 0, 0}) == true);
    assert(pairs_sum_to_zero({-5, 3, -3, 5, 9}) == true);
    
    return 0;
}