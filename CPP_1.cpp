#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    bool in_group = false;
    
    for (char c : paren_string) {
        if (c == '(') {
            in_group = true;
            group = "(";
        } else if (c == ')') {
            in_group = false;
            group += ")";
            groups.push_back(group);
        } else if (in_group) {
            group += c;
        }
    }
    
    return groups;
}

int main() {
    string input;
    cout << "Enter the string containing nested parentheses: ";
    getline(cin, input);
    
    vector<string> result = separate_paren_groups(input);
    
    cout << "Separated groups are: ";
    for (const string& group : result) {
        cout << group << " ";
    }
    
    return 0;
}