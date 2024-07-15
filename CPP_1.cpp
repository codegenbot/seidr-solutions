#include <iostream>
#include <vector>
#include <string>
#include <cassert>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    // Check if vectors a and b are the same
    return a == b;
}

int main() {
    // Add forward declaration for separate_paren_groups
    vector<string> separate_paren_groups(string paren_string);

    // Check equality of results using issame function
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
}