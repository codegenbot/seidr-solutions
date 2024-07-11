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
    std::vector<int> input = {-3, 9, -1, 4, 2, 31};
    bool result = pairs_sum_to_zero(input);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}