#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!current_group.empty()) {
                result.push_back(current_group);
                current_group = "";
            }
        }
        else if (c == ')') {
            if (!current_group.empty()) {
                current_group += ')';
                result.push_back(current_group);
                current_group = "";
            }
        }
        else if (c != ' ') {
            current_group += c;
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}

int main() {
    string paren_string;
    getline(cin, paren_string);

    vector<string> groups = separate_paren_groups(paren_string);

    for (string group : groups) {
        cout << group << endl;
    }

    return 0;
}