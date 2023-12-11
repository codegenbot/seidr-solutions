```
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}
```