#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            if (open_count > 1) {
                group += c;
            }
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(group);
                group = "";
            } else {
                group += c;
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

    for (const string& group : groups) {
        cout << group << endl;
    }

    return 0;
}