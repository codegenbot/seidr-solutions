#include <vector>
#include <algorithm>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        int num = std::abs(x);
        if ((num / 10000 > 0 || (num / 100) % 10 > 4) && (num / 1000) % 10 < 3) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {};
    int result = specialFilter(nums);
    return 0;
}