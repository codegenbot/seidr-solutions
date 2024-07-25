#include <iostream>
#include <vector>
#include <string>

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

bool is_same(vector<string> result, vector<string> expected) {
    return issame(result, expected);
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            temp += c;
        } else if (c == ')') {
            count--;
            temp += c;
            if (count == 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }

    return result;
}

int main() {
    assert(is_same(separate_paren_groups("( ) (( )) (( )( ")) , {"()", "(())", "(()())"}));
    return 0;
}