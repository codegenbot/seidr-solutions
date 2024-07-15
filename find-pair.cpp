#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<vector<int>> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<vector<int>> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            for (int j = 0; j <= i; j++) {
                if (nums[j] + nums[i] == target) {
                    vector<int> pair = {nums[j], nums[i]};
                    result.push_back(pair);
                }
            }
        }
        numMap[nums[i]] = i;
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto pairs = findPair(nums, target);
    if (!pairs.empty()) {
        cout << "The pairs are: ";
        for (const auto& pair : pairs) {
            cout << pair[0] << ", " << pair[1] << endl;
        }
    } else {
        cout << "No such pair found." << endl;
    }
    return 0;
}