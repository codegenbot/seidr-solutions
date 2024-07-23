#include <vector>
#include <iostream>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        if ((std::abs(x) % 11) == 1 || (std::abs(x) % 11) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    assert(specialFilter(nums) == 2);
    return 0;
}