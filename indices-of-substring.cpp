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
```
vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (size_t i = 0; i < text.length() - target.length() + 1; ++i) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
        }
    }
    return result;
}
```