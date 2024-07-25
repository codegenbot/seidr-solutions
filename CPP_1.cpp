#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!current_group.empty()) {
                result.push_back(current_group);
            }
            current_group = "(";
        } else if (c == ')') {
            current_group += ')';
            result.push_back(current_group);
            current_group = "";
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    for (const string& group : groups) {
        cout << group << " ";
    }

    return 0;
}