#include <iostream>
#include <vector>
#include <map>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    map<int, size_t> numMap;
    
    for (size_t i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], static_cast<int>(i)};
        }
        numMap[nums[i]] = i;
    }
    
    return {-1, -1};
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    cout << "The pair of numbers that sum to the target is: ";
    for (auto pair : findPair(nums, target)) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;
    return 0;
}