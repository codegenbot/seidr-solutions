#include <unordered_set>

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> nums;
    for (int num : l) {
        if (nums.count(-num) > 0) {
            return true;
        }
        nums.insert(num);
    }
    return false;
}