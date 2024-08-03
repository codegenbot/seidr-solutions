#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    
    cout << "Test passed!" << endl;
    
    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                group += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }
    
    return result;
}