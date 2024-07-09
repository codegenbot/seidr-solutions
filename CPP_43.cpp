```cpp
#include <iostream>
#include <vector>

bool pairs_sum_to_zero(const std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

main() {
    std::vector<int> input = {-3, 9, -1, 4, 2, 31};
    std::cout << (pairs_sum_to_zero(input) ? "True" : "False");
    return 0;
}