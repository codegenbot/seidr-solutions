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
#define PII pair<int, int>
#define MP(x, y) make_pair(x, y)
#define AA first
#define BB second
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1, 1, 1, 0
output:
1, 1, 1, 0, 0, 0

input:
1, 10
output:
1, 10, 0, 0

input:
1, 100
output:
1, 100, 0, 0

input:
1, 1000
output:
1, 1000, 0, 0

input:
1, 10000
output:
1, 10000, 0, 0

*/
int cal(vector<int>& num, int mid) {
    int lmax = num[0];
    int rmax = num[mid + 1];
    for(int i = 0; i < mid + 1; i++) lmax = max(lmax, num[i]);
    for(int i = mid + 1; i < num.size(); i++) rmax = max(rmax, num[i]);
    return abs(lmax - rmax);
}
vector<int> maxDif(vector<int>& num) {
    vector<int> ret;
    if(num.size() < 2) return ret;
    sort(num.begin(), num.end());
    int l = 0;
    int r = num.size() - 1;
    int ans = num.size() - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        int d = cal(num, mid);
        if(d == 0) {
            ans = mid;
            break;
        } else if(d > 0) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
        ans = mid;
    }
    int lmax = num[0];
    int rmax = num[ans + 1];
    for(int i = 0; i < ans + 1; i++) lmax = max(lmax, num[i]);
    for(int i = ans + 1; i < num.size(); i++) rmax = max(rmax, num[i]);
    ret.push_back(lmax);
    ret.push_back(rmax);
    return ret;
}
int main() {
