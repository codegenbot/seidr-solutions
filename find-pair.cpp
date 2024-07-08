```c++
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result = {-1, -1};
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            vector<int> pair = {min(complement, nums[i]), max(complement, nums[i])};
            if (pair[0] != result[0] || pair[1] != result[1])
                result = pair;
        }
        numMap[nums[i]] = i;
    }
    return result;
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
    vector<int> result = findPair(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}