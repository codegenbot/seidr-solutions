#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        }
        else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            }
            if (count == 0 && !current_group.empty()) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter the string of nested parentheses: ";
    getline(cin, input);

    vector<string> groups = separate_paren_groups(input);

    cout << "Separated groups: ";
    for (string group : groups) {
        cout << group << " ";
    }

    return 0;
}