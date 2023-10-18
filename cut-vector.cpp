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
/*
You are given an array of integers. Find the length of the longest increasing subsequence (not necessarily contiguous) in the array.
Example:
[0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
The following input should return 6 since the longest increasing subsequence is 0, 2, 6, 9 , 11, 15.
*/
int main() {
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];  
    int l = 0, r = n - 1;
    while(l < r) {
        int mid = (l + r) / 2;
        if(a[mid] >= k) r = mid;
        else l = mid + 1;
    }
    if(a[l] == k) cout << l << endl;
    else cout << -1 << endl;
    return 0;
}
