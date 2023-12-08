#include <vector>
#include <unordered_set>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    #undef __cpp_lib_initializer_list
    std::unordered_set<int> complement;
    int firstNum = 0;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum)) {
            return { firstNum, complementNum };
        }
        complement.insert(num);
        firstNum = num;
    }
    return {};
}