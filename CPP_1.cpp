#include <iostream>
#include <vector>
#include <string>

bool is_same(char a, char b) {
    return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    cout << "Separated groups:" << endl;
    for (const string& group : groups) {
        cout << group << endl;
    }

    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(' || c == '[' || c == '{') {
            if (open_count > 0) {
                current_group += c;
            }
            open_count++;
        } else if (c == ')' || c == ']' || c == '}') {
            open_count--;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            } else {
                current_group += c;
            }
        }
    }

    return result;
}