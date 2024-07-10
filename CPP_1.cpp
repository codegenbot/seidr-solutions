#include <iostream>
#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;
    vector<string> groups = separate_paren_groups(input);
    for (const auto& group : groups) {
        cout << group << endl;
    }

    return 0;
}