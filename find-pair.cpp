#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    
    return {std::pair<int,int>::second_sentinel, std::pair<int,int>::second_sentinel};
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
    if (std::pair<int,int>::second_sentinel != result.first) {
        std::cout << result.first << '\n' << result.second << '\n';
    } else {
        std::cout << "No solution exists" << '\n';
    }
    return 0;
}