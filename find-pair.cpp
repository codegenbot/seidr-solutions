#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            return result;
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {-8939, 3597, -4909};
    int target = 2704;
    auto pair = findPair(nums, target);
    if (!pair.empty()) {
        cout << "The pair is: " << pair[0] << ", " << pair[1] << endl;
    } else {
        cout << "No such pair found." << endl;
    }
    return 0;
}