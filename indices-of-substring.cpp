```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = 0;

    while (end <= text.length() - target.length()) {
        if (text.substr(start, target.length()).compare(target) == 0) {
            result.push_back(start);
            start += 1;
        } else {
            start++;
        }
        end++;
    }

    return result;
}

int main() {
    string text = "bananas";
    string target = "ana";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}