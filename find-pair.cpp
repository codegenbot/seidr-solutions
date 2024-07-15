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
    int num1, num2;
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            num1 = min(target - nums[i], nums[i]);
            num2 = max(target - nums[i], nums[i]);
            found = true;
            break;
        }
        mp[nums[i]] = i;
    }

    if (found) {
        cout << num1 << endl;
        cout << num2 << endl;
    } else {
        cout << "Pair not found." << endl;
    }

    return 0;
}