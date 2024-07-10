```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(const string& s) {
    vector<int> result;
    int depth = 0;
    for (char c : s) {
        if (c == '(') {
            ++depth;
        } else if (c == ')') {
            --depth;
            if (depth < 0) {
                while (depth < 0 && !result.empty()) {
                    result.pop_back();
                }
            }
        }
    }
    return result;
}

int main_function() {
    vector<int> expected = {4, 3, 2, 1, 0, -1, -2, -3, -4};
    if (!issame(parse_nested_parens("(()(())((()))"), vector<int>(expected.begin(), expected.end()))) {
        cout << "Test failed" << endl;
    } else {
        cout << "Test passed" << endl;
    }
    return 0;
}