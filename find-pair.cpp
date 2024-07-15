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
    
    cin.ignore();
    cin >> target;

    unordered_map<int, int> mp;
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
        cout << "No such pair found" << endl;
    }

    return 0;
}