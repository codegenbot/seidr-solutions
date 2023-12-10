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

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int currentLeader = INT_MIN;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] > currentLeader) {
            currentLeader = v[i];
            result.push_back(currentLeader);
        }
    }
    return result;
}

int main() {
    vector<int> v = {1, 2, 3};
    vector<int> result = leaders(v);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}
```