```cpp
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_set<int> complement;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum)) {
            return {complementNum, num};
        }
        complement.insert(num);
    }
    return {};
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
    vector<int> pair = findPair(nums, target);
    for (int num : pair) {
        cout << num << endl;
    }
    return 0;
}
```