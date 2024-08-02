#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    // Implementation of separate_paren_groups function
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}