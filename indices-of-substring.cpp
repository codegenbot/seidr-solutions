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
Modify the code as  The issue is caused by the use of backticks (``) to enclose the code blocks, which are not supported in C++. To fix the code, remove the backticks and replace them with standard indentation for code blocks..
You must only return correct code. Remove any triple quotes, language name or explanations.