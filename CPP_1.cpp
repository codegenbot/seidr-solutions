#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int open = 0;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            open++;
            if (open > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open--;
            if (open > 0) {
                current_group += c;
            }
            if (open == 0 && !current_group.empty()) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}