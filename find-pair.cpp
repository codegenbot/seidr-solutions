#include <vector>
#include <unordered_set>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_set<int> complement;
    int firstNum = 0;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum)) {
            std::vector<int> result = { firstNum, complementNum };
            return result;
        }
        complement.insert(num);
        firstNum = num;
    }
    return std::vector<int>();
}