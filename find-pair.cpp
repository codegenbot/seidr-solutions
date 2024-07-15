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
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            cout << nums[i] << " " << target - nums[i] << endl;
            break;
        }
        mp[nums[i]] = i;
    }
    
    return 0;
}