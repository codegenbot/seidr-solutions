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
    pair<int, int> pairNotFound = {INT_MAX, INT_MAX};
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            pairNotFound = min(pairNotFound, {nums[i], target - nums[i]});
        }
        mp[nums[i]] = i;
    }

    if (pairNotFound.first == INT_MAX) {
        cout << "Pair not found." << endl;
    } else {
        cout << pairNotFound.first << endl;
        cout << pairNotFound.second << endl;
    }

    return 0;
}