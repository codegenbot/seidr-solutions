#include <vector>
#include <algorithm>
#include <initializer_list>

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
    std::vector<int> nums = {1, 2, 3, 4, 5};
    assert(specialFilter(nums) == 3);
    return 0;
}