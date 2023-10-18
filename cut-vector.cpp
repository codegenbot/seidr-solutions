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
Given an array of integers, find the length of the longest subsequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

Input:

The first line of input contains T, number of test cases.

First line of line each test case contains a single integer N.

Next line contains N integer array.

Output:

Print the output of each test case in a seprate line.

Constraints:

1<=T<=100
1<=N<=100
0<=a[i]<=500

Example:

Input:

2
7
2 6 1 9 4 5 3
7
1 9 3 10 4 20 2

Output:

6
4
*/
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        map<int, int> mp;
        for(int i = 0; i < n; i++) mp[a[i]] = 1;
        for(int i = 0; i < n; i++) {
            if(mp[a[i] - 1] == 0) {
                int j = a[i];
                while(mp[j] > 0) j++;
                ans = max(ans, j - a[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
