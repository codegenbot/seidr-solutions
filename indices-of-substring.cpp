
The issue is with the backticks (``) used to enclose the code. The compiler is complaining about stray backticks, indicating that they are not allowed in the program. To fix this, you can remove the extra backticks and only use them where necessary.

Here's an updated version of the code without the extra backticks:
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

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int i = 0;
    while (i < text.size()) {
        if (text[i] == target[0]) {
            bool found = true;
            for (int j = 1; j < target.size(); j++) {
                if (text[i + j] != target[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                result.push_back(i);
            }
        }
        i++;
    }
    return result;
}
```