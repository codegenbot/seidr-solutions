```c++
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return {min({complement, nums[i]}), max({component, nums[i]})};
        }
        numIndex[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}