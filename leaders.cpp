```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
vector<int> leaders(vector<int> nums) {
    vector<int> leaders;
    int currentLeader = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > currentLeader) {
            leaders.push_back(nums[i]);
            currentLeader = nums[i];
        }
    }
    return leaders;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> leaders = leaders(nums);
    cout << "Leaders: ";
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    return 0;
}
```