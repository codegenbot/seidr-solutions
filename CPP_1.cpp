#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    // Test cases
    vector<string> test_input = {"(abc)(def)", "(ab)(cd)", "((a)(b)(c))"};
    for (string input : test_input) {
        vector<string> result = separate_paren_groups(input);
        for (string group : result) {
            cout << group << " ";
        }
        cout << endl;
    }

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                result.push_back(group);
                group = "";
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(group + "()");
                group = "";
            } else {
                group += ')';
            }
        } else if (open_count > 0) {
            group += c;
        }
    }

    return result;
}