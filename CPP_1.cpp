#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(vector<string> a, vector<string> b);
vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (!group.empty()) {
                result.push_back(group);
            }
            group = "";
        } else if (c == ')') {
            result.push_back("(" + group + ")");
            group = "";
        } else {
            group += c;
        }
    }
    
    if (!group.empty()) {
        result.push_back(group);
    }
    
    return result;
}

int main() {
    vector<string> test_input = separate_paren_groups("( )(())(()())");
    vector<string> expected_output = {"()", "(())", "(()())"};
    
    assert(issame(test_input, expected_output));
    
    std::cout << "Test passed successfully!" << std::endl;
    
    return 0;
}