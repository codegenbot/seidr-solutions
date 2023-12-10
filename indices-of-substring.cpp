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
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.size() && text[i + j] == target[j]) {
                ++j;
            }
            if (j == target.size()) {
                result.push_back(i);
            }
        }
    }
    return result;
}
```
Modify the code as  The issue is caused by the use of backticks (``) in the code, which are not allowed in C++. To fix this, replace all instances of backticks with double quotes ("). This will ensure that the code compiles and runs correctly..
You must only return correct code. Remove any triple quotes, language name or explanations.