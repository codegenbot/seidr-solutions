#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<string, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(to_string(complement)) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[to_string(nums[i])] = i;
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