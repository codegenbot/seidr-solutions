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
Given a vector with even number of elements, split the vector into two subvectors with equal sum. If this is not possible, output "-1".
For example, [1,-1,2,-2] should be split at (1,-1) and (2,-2) (for a total sum of 0), for input [1,2,3,4] the output is -1.

*/
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    if (n % 2 == 1 || sum % 2 == 1) {
        cout << "-1" << endl;
    } else {
        bool found = false;
        int border = 0;
        vector<int> seen;
        for (int i = 0; i < n; i++) {
            seen.push_back(nums[i]);
            if (sum / 2 == nums[i]) {
                border = i;
                found = true;
                break;
            }
            for (int j = i - 1; j >= 0; j--) {
                if (seen[j] <= sum / 2 && sum / 2 - seen[j] == nums[i]) {
                    border = i;
                    found = true;
                    break;
                }
                seen.push_back(nums[i] + seen[j]);
            }
            if (found) {
                break;
            }
        }
        if (found) {
            for (int i = 0; i < border + 1; i++) {
                cout << nums[i] << endl;
            }
            for (int i = border; i < n; i++) {
                cout << nums[i] << endl;
            }
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
