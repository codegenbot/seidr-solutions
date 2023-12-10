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

/* Given a vector of positive integers, find the spot where, if you cut the 
   vector, the numbers on both sides are either equal, or the difference is as small as possible. 
   Return the two resulting subvectors as two outputs. */
int main() {
    vector<int> v;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        int diff = abs(v[i] - v[n-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<int> subvec1, subvec2;
    for (int i = 0; i < n; i++) {
        if (i <= cutIndex) {
            subvec1.push_back(v[i]);
        } else {
            subvec2.push_back(v[i]);
        }
    }
    
    // Store the subvectors in separate variables
    vector<int> subvector1 = subvec1;
    vector<int> subvector2 = subvec2;
    
    return 0;
}