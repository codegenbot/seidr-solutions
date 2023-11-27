#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group;

    bool in_group = false;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (!in_group) {
                in_group = true;
                current_group = "";
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (in_group && open_braces == 0) {
                in_group = false;
                result.push_back(current_group);
            }
        } else if (in_group) {
            current_group += c;
        }
    }

    return result;
}

bool issame(vector<string> a, const vector<string>& b){
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

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}