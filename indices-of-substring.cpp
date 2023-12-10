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

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    while (index < text.length()) {
        int pos = text.find(target, index);
        if (pos != string::npos) {
            result.push_back(pos);
            index = pos + target.length();
        } else {
            break;
        }
    }
    return result;
}
```