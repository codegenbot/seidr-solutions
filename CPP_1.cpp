#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            current_group += c;
        } else if (c == ')') {
            current_group += c;
            groups.push_back(current_group);
            current_group = "";
        }
    }

    return groups;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> result = separate_paren_groups(input);

    for (string group : result) {
        cout << group << endl;
    }

    return 0;
}