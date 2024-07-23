#include <vector>
int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int x : nums) {
        if ((std::abs(x) % 11) == 1 || (std::abs(x) % 11) == 0) {
            count++;
        }
    }
    return count;
}