#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1}; 
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    pair<int, int> result = findPair(nums, target);

    if (result.first == -1) {
        std::cout << "No such pair exists" << std::endl;
    } else {
        std::cout << result.first << "\n" << result.second << std::endl;
    }

    return 0;
}