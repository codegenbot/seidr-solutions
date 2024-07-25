```
#include <iostream>
#include <string>
#include <vector>

bool issame(vector<string>, vector<string>);
vector<string> separate_paren_groups(string);

int main() {
    vector<string> input = separate_paren_groups("( ) (( )) (( )( ))");
    vector<string> expected = {"()", "(())", "(()())"};
    bool same = issame(input, expected);
    
    if (same) std::cout << "The two vectors are the same.\n";
    else std::cout << "The two vectors are not the same.\n";
    return 0;
}

bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}