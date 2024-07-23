#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    
    for (char c : paren_string) {
        if (c == '(' || c == ')') {
            if (current_group.empty() || current_group.back() != c) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        } else {
            current_group += c;
        }
    }
    
    if (!current_group.empty()) {
        result.push_back(current_group);
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