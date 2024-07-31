#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issame(const string &s1, const string &s2) {
    return s1 == s2;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cin >> input;

    vector<string> result = separate_paren_groups(input);

    for (string group : result) {
        cout << group << "\n";
    }

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    bool in_group = false;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (in_group) {
                result.push_back(current_group);
                current_group = "";
            }
            in_group = true;
        } else if (ch == ')') {
            in_group = false;
            result.push_back(current_group);
            current_group = "";
        } else if (in_group) {
            current_group += ch;
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}