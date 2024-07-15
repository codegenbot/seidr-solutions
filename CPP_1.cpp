#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string current_group;
    bool in_group = false;

    for (char c : paren_string) {
        if (c == '(') {
            if (in_group) {
                groups.push_back(current_group);
                current_group = "";
            }
            in_group = true;
        } else if (c == ')') {
            in_group = false;
        } else if (in_group) {
            current_group += c;
        }
    }

    if (!current_group.empty()) {
        groups.push_back(current_group);
    }

    return groups;
}

int main() {
    string input;
    cout << "Enter the string with nested parentheses: ";
    getline(cin, input);

    vector<string> result = separate_paren_groups(input);

    for (const auto& group : result) {
        cout << group << endl;
    }

    return 0;
}