#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            group += c;
        } else if (c == ')') {
            count--;
            group += c;
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}