#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<string> groups;
    string group = "";

    for (char c : paren_string) {
        if (c == '(') {
            group += '(';
            if (groups.empty()) {
                groups.push(group);
            }
        } else if (c == ')') {
            group += ')';
            if (!groups.empty()) {
                groups.pop();
                if (groups.empty()) {
                    result.push_back(group);
                }
            }
            group = "";
        } else {
            group += c;
        }
    }

    return result;
}

int main() {
    string paren_string = "( ) (( )) (( )( ))";
    vector<string> groups = separate_paren_groups(paren_string);

    for (string group : groups) {
        cout << group << endl;
    }

    return 0;
}