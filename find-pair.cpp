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
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end() && mp[complement] != i) {
            cout << nums[i] << endl;
            cout << complement << endl;
            break;
        }
        mp[nums[i]] = i;
    }
    
    return 0;
}