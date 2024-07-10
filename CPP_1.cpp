#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
}

int main() {
    vector<string> separate_paren_groups(string paren_string) {
        vector<string> result;
        string current_group;
        int balance = 0;

        for (char c : paren_string) {
            if (c == '(') {
                if (balance > 0) {
                    current_group += c;
                }
                balance++;
            } else if (c == ')') {
                balance--;
                if (balance == 0) {
                    result.push_back(current_group);
                    current_group.clear();
                } else {
                    current_group += c;
                }
            }
        }

        return result;
    }

    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}