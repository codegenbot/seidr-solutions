#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(const string& paren_string) {
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
    string input_string;
    cout << "Enter a string with parentheses:";
    cin >> input_string;

    vector<string> separated_groups = separate_paren_groups(input_string);

    cout << "Separated groups are: ";
    for (const auto& group : separated_groups) {
        cout << group << " ";
    }

    return 0;
}