#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(const string& s) {
    vector<string> groups;
    int count = 0;
    string current_group = "";
    
    for(char c : s) {
        if(c == '(') {
            count++;
        } else if(c == ')') {
            count--;
        }
        
        current_group += c;
        
        if(count == 0) {
            groups.push_back(current_group);
            current_group = "";
        }
    }
    
    return groups;
}

bool issame(const vector<string>& a, const vector<string>& b) {
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
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), vector<string>{"()", "(())", "(()())"}));
    return 0;
}