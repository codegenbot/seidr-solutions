#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                current_group += c;
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    cout << "Separated groups:" << endl;
    for (string group : groups) {
        cout << group << endl;
    }

    vector<string> test_groups = separate_paren_groups(input);

    if (issame(groups, test_groups)) {
        cout << "The separated groups are the same." << endl;
    } else {
        cout << "The separated groups are different." << endl;
    }

    return 0;
}