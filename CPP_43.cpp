#include <vector>
#include <unordered_set>
#include <cassert>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> nums;
    for (int num : l) {
        if (nums.count(-num) > 0) {
            return true;
        }
        nums.insert(num);
    }
    return false;
}

assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
return 0;