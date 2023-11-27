#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == ' ') {
            continue;
        }

        group += c;

        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }

        if (count == 0) {
            result.push_back(group);
            group = "";
        }
    }

    return result;
}

int main() {
    assert(separate_paren_groups("( ) (( )) (( )( ))") == vector<string>{"()", "(())", "(()())"});
    // Add more test cases if needed
    return 0;
}