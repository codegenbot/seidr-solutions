#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> input = separate_paren_groups("((group1)group2(group3)(group4))");
    for (string group : input) {
        cout << group << endl;
    }

    vector<string> test1 = {"group1", "group2", "group3", "group4"};
    vector<string> test2 = separate_paren_groups("((group1)group2(group3)(group4))");

    if (issame(test1, test2)) {
        cout << "Test passed: The groups are the same." << endl;
    } else {
        cout << "Test failed: The groups are different." << endl;
    }

    return 0;
}