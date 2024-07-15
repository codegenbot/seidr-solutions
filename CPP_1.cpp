#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issame(string str) {
    int count = 0; 
    for (char c : str) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
    }

    return count == 0;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    vector<string> result = separate_paren_groups(input);

    cout << "Groups of parentheses: ";
    for (string group : result) {
        cout << group << " ";
    }

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            }
            if (balance == 0) {
                if (issame(current_group)) {
                    result.push_back(current_group);
                }
                current_group = "";
            }
        }
    }

    return result;
}