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

vector<int> leaders(const vector<int>& v) {
    vector<int> result;
    int currentLeader = INT_MIN;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= currentLeader) {
            result.push_back(v[i]);
            currentLeader = v[i];
        }
    }
    return result;
}
```