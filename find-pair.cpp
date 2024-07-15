#include <iostream>
#include <vector>
#include <map>

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
            cout << target - nums[i] << endl;
            cout << nums[i] << endl;
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