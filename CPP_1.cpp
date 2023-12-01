#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '(' || c == ')') {
            current_group.push_back(c);
        }
    }

    int open_count = 0;
    string current_paren;

    for (char c : current_group) {
        if (c == '(') {
            open_count++;
            current_paren.push_back(c);
        } else if (c == ')') {
            open_count--;
            current_paren.push_back(c);
            if (open_count == 0) {
                result.push_back(current_paren);
                current_paren.clear();
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter the string containing multiple groups of nested parentheses: ";
    getline(cin, input);

    vector<string> groups = separate_paren_groups(input);

    cout << "Separated groups:" << endl;
    for (string group : groups) {
        cout << group << endl;
    }

    return 0;
}