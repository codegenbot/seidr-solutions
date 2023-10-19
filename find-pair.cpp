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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
*/
int main() {
    int n, target;
    while (cin >> n >> target) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int l = 0, r = n - 1;
        while (l < r) {
            if (arr[l] + arr[r] == target) {
                cout << arr[l] << " " << arr[r] << endl;
                l++;
                r--;
            } else if (arr[l] + arr[r] < target) {
                l++;
            } else {
                r--;
            }
        }
    }
    return 0;
}
