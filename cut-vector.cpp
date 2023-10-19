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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/
int main() {
    vector<int> arr = {1,10,100,1000,10000};
    int sum = 0;
    for(auto i : arr) {
        sum += i;
    }
    int n = arr.size();
    int left = 0, right = sum;
    int mid = 0;
    int ans = INT_MAX;
    int idx = 0;
    while(left <= right) {
        mid = left + (right - left) / 2;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++) {
            if(sum1 <= mid) {
                sum1 += arr[i];
            } else {
                sum2 += arr[i];
            }
        }
        if(abs(sum1 - sum2) < ans) {
            ans = abs(sum1 - sum2);
            idx = mid;
        }
        if(sum1 == sum2) {
            break;
        } else if(sum1 > sum2) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << idx << endl;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        if(sum1 <= idx) {
            sum1 += arr[i];
            cout << arr[i] << " ";
        } else {
            sum2 += arr[i];
        }
    }
    cout << endl;
    cout << sum2 << endl;
    return 0;
}
