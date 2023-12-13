```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
```
#### Test Input Reasoning:

Let's test the code on a basic input where the target string is an empty string.