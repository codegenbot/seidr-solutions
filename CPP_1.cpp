#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int count = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            count++;
            if (count > 1) {
                current_group += paren_string[i];
            }
        }
        else if (paren_string[i] == ')') {
            count--;
            if (count > 0) {
                current_group += paren_string[i];
            }
            else {
                result.push_back(current_group);
                current_group = "";
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

    cout << "Separated groups: ";
    for (string group : groups) {
        cout << group << " ";
    }
    cout << endl;

    return 0;
}