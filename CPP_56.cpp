```
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool correct_bracketing(string brackets) {
    stack<char> s;
    for (int i = 0; i < brackets.length(); i++) {
        if (brackets[i] == '<') {
            s.push(brackets[i]);
        } else if (brackets[i] == '>') {
            if (!s.empty()) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string brackets = "<>";
    cout << correct_bracketing(brackets) << endl;
    return 0;
}
```