```cpp
#include <vector>
#include <string>
#include <initializer_list>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int k = i + 1; k <= text.size() - target.size(); ++k) {
                found = true;
                for (int j = 0; j < target.size(); ++j) {
                    if (text[k + j] != target[j]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    result.push_back(k);
                } else {
                    break;
                }
            }
        }
    }
    return result;
}

int main() {
    string text = "ABCDEF";
    string target = "CDE";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
}