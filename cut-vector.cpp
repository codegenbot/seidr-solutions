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

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int>& v) {
    int n = v.size();
    vector<int> left, right;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            left.push_back(v[i]);
        } else {
            right.push_back(v[i]);
        }
    }
    return {{left}, {right}};
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto result = cutVector(v);
    cout << "Left: ";
    for (auto& x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (auto& x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
```