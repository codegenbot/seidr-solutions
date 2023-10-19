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
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    long long minDiff = LLONG_MAX;
    int index = -1;
    for (int i = 1; i < n; i++) {
        if (minDiff > (long long)nums[i] - (long long)nums[i - 1]) {
            minDiff = (long long)nums[i] - (long long)nums[i - 1];
            index = i;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (i == index - 1) cout << endl;
        cout << nums[i] << endl << endl << endl;
    }
    return 0;
}
