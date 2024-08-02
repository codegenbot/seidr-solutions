#include <vector>
#include <assert.h>
using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(const vector<string>& a, const vector<string>& b) {
    int min_size = min(a.size(), b.size());
    for (int i = 0; i < min_size; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return a.size() == b.size();
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                current_group += c;
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}