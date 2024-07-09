#include <vector>
#include <string>
#include <cassert>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
}

vector<string> separate_paren_groups(string paren_string) {
    // Existing code for separate_paren_groups
}

bool issame(vector<string> a, vector<string> b) {
    // Function implementation for checking equality
}