```c++
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            int closestIndex = numMap[complement];
            int leftIndex = i - 1;
            while (leftIndex >= 0 && nums[leftIndex] < complement) {
                if (nums[leftIndex] + nums[i] == target) {
                    return {nums[leftIndex], nums[i]};
                }
                leftIndex--;
            }
        }
        numMap[nums[i]] = i;
    }
    vector<int> result = {-1, -1};
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