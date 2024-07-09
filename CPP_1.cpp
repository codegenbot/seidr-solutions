#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

bool issame(const string& a, const vector<string>& b) {
    for (const auto& s : b) {
        if (!issame(a, s)) return false;
    }
    return true;
}

string separate_paren_groups(string s) {
    int count = 0;
    string current_group = "";
    string result = "";

    for (char c : s) {
        if (c == '(') {
            count++;
            current_group += c;
        } else if (c == ')') {
            count--;
            current_group += c;
            if (count == 0) {
                result += current_group; 
                current_group = "";
            }
        } else {
            if (count > 0) {
                current_group += c;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    assert(issame(separate_paren_groups("( ) (( )) (( )( )"), {"", "(())", "(()())"}));

    cout << "Result: " << separate_paren_groups(s) << endl;
    return 0;
}