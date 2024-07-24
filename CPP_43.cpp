#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> nums;
    for (int num : l) {
        if (nums.count(num) > 0 || nums.count(-num) > 0 || (num == 0 && nums.count(0) > 0)) {
            return true;
        }
        nums.insert(num);
    }
    return false;
}