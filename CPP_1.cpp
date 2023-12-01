#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    // Remove spaces from the input string
    paren_string.erase(remove(paren_string.begin(), paren_string.end(), ' '), paren_string.end());

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
        } else if (c == ')') {
            open_braces--;
        }

        current_group += c;

        if (open_braces == 0) {
            result.push_back(current_group);
            current_group = "";
        }
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> groups = separate_paren_groups(input);

    for (string group : groups) {
        cout << group << endl;
    }

    return 0;
}