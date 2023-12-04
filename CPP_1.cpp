
```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool issame(const string& s1, const string& s2) {
    if (s1.size() != s2.size()) return false;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

vector<string> separate_paren_groups(const string& s) {
    vector<string> groups;
    int open = 0, close = 0;
    string temp;
    for (char c : s) {
        if (c == '(') {
            open++;
        } else if (c == ')') {
            close++;
        }
        if (open == close && open > 0) {
            groups.push_back(temp);
            temp = "";
            open = 0;
            close = 0;
        } else {
            temp += c;
        }
    }
    return groups;
}

int main() {
    string s;
    cin >> s;
    vector<string> groups = separate_paren_groups(s);
    for (const string& group : groups) {
        if (!issame(group, "((())")) cout << group << endl;
    }
    return 0;
}
```