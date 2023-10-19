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
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. 
Return the two resulting subvectors as two outputs.
*/
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int minDiff = INT_MAX;
    int index = -1;
    for (int i = 1; i < n; i++) {
        if (abs(nums[i] - nums[i - 1]) < minDiff) {
            minDiff = abs(nums[i] - nums[i - 1]);
            index = i;
        }
    }
    for (int i = 0; i < index; i++) {
        cout << nums[i] << endl;
    }
    for (int i = index; i < n - 1; i++) {
        cout << nums[i] << endl;
    }
    cout << nums[n - 1] << endl;
    return 0;
}
