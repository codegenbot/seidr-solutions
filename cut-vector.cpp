```
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

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    if (n == 0) return vector<int>();
    if (n == 1) return vector<int>(v[0]);
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(cutIndex);
    for (int i = 0; i < cutIndex; i++) {
        left[i] = v[i];
    }
    
    vector<int> right(n - cutIndex);
    for (int i = cutIndex; i < n; i++) {
        right[i - cutIndex] = v[i];
    }
    
    return vector<int>{left, right};
}
```