#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balanced = 0;

    for(char ch : paren_string) {
        if (ch != '(' && ch != ')' && ch != ' ') {
            continue; // Ignore invalid characters
        }
        if (ch == ' ') {
            continue; // Ignore spaces
        }
        current_group += ch;
        if(ch == '(') {
            balanced++;
        } else if(ch == ')') {
            balanced--;
        }
        if(balanced == 0 && !current_group.empty()) {
            result.push_back(current_group);
            current_group = "";
        }
    }

    // Handle edge case: unbalanced parentheses
    if (balanced != 0) {
        cerr << "Unbalanced parentheses detected." << endl;
        return {};
    }
    
    return result;
}