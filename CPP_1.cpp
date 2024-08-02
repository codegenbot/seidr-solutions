#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<char> parentheses;
    string current_group = "";

    for (char c : paren_string) {
        if (c == '(') {
            parentheses.push(c);
            current_group += c;
        } else if (c == ')') {
            if (!parentheses.empty()) {
                parentheses.pop();
                current_group += c;
                if (parentheses.empty()) {
                    result.push_back(current_group);
                    current_group = "";
                }
            }
        }
    }

    return result;
}

int main() {
    string input = "( ) (( )) (( )( ))";
    vector<string> output = separate_paren_groups(input);

    for (string s : output) {
        cout << s << endl;
    }

    return 0;
}