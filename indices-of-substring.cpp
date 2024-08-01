Here is the modified code:

```cpp
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    while ((index = text.find(target, index)) != string::npos) {
        result.push_back(index);
        index += target.length(); // to avoid overlapping
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = indicesOfSubstring(text, text.substr(0, n));
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}