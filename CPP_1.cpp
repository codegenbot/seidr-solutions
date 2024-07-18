#include <iostream>
#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string);

bool areSame(string a, string b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    string s = "((abc)(def))(ghi)";
    
    vector<string> groups = separate_paren_groups(s);
    
    for (const string& group : groups) {
        std::cout << group << std::endl;
    }

    return 0;
}