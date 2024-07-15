#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            cout << mp[target - nums[i]] << " " << i << endl;
            return 0;
        }
        mp[nums[i]] = i;
    }

    cout << "No such pair found" << endl;
    return 0;
}