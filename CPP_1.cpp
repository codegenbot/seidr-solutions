```
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int test_main() {
    assert(issame(separate_paren_groups("( ) (( "),"{}","{(())", "(())"}"));
    return 0;
}

bool issame(vector a, vector b) {
    for (string s : a) {
        bool found = false;
        for (string t : b) {
            if (s == t) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

vector separate_paren_groups(string paren_string) {
    vector result;
    string current_group = "";
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}