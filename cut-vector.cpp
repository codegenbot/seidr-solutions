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
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = 0;
    for (int i = 0; i < n / 2; i++) {
        left += nums[i];
    }
    for (int i = n / 2; i < n; i++) {
        right += nums[i];
    }
    if (n % 2 == 0) {
        if (left > right) {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            for (int i = n / 2; i < n; i++) {
                cout << nums[i] << " ";
            }
        } else {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            for (int i = n / 2; i < n; i++) {
                cout << nums[i] << " ";
            }
        }
    } else {
        if (left > right) {
            cout << n / 2 + 1 << endl;
            for (int i = 0; i < n / 2 + 1; i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            for (int i = n / 2 + 1; i < n; i++) {
                cout << nums[i] << " ";
            }
        } else {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
            cout << n / 2 + 1 << endl;
            for (int i = n / 2; i < n; i++) {
                cout << nums[i] << " ";
            }
        }
    }
    return 0;
}
