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
    vector<int> left, right;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            left.push_back(v[i]);
        } else {
            right.push_back(v[i]);
        }
    }
    return left + right;
}
```