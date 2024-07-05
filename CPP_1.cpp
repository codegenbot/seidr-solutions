#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current;
    int balance = 0;
    
    for (char ch : paren_string) {
        if (ch == ' ') continue;
        current += ch;
        if (ch == '(') balance++;
        else if (ch == ')') balance--;
        
        if (balance == 0 && !current.empty()) {
            result.push_back(current);
            current.clear();
        }
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(separate_paren_groups("() (()) (()())"), {"()", "(())", "(()())"}));
    return 0;
}