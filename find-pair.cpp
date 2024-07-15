#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;

    map<int, int> mp;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            int num1 = min(nums[i], target - nums[i]);
            int num2 = max(nums[i], target - nums[i]);
            cout << num1 << endl;
            cout << num2 << endl;
            found = true;
            break;
        }
        mp[nums[i]] = i;
    }

    if (!found) {
        cout << "Pair not found." << endl;
    }

    return 0;
}