#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        }
        else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            }
            if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

vector<string> test_separate_paren_groups() {
    assert(separate_paren_groups("( ) (( )) (( )( ))") == vector<string>{"()", "(())", "(()())"});
    assert(separate_paren_groups("(())()") == vector<string>{"(())", "()"});

    return vector<string>{"Test cases passed successfully!"};
}