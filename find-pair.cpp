#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap.insert({nums[i], i});
    }
    return {};
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto pair = findPair(nums, target);
    if (!pair.empty()) {
        cout << "The pair is: " << pair[0] << ", " << pair[1] << endl;
    } else {
        cout << "No such pair found." << endl;
    }
}