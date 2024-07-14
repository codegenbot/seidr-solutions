````
#include <vector>
#include <unordered_map>
#include <iostream>
#include <stdexcept>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    throw runtime_error("No pair found");
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int target;
        cin >> target;
        vector<int> nums;
        int a, b;
        cin >> a >> b;
        nums.push_back(a);
        nums.push_back(b);
        try {
            pair<int, int> result = findPair(nums, target);
            cout << "The two elements that sum to the target are " << result.first << " and " << result.second << endl;
        } catch (const runtime_error& e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}
```