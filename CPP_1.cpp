#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group += c;
            }
        }
        else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            }
            else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

void test() {
    vector<string> expected = {"()", "(())", "(()())"};
    vector<string> result = separate_paren_groups("( ) (( )) (( )( ))");

    assert(issame(expected, result));
}

int main() {
    test();
    return 0;
}