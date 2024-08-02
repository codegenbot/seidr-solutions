#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    // Implement the function to separate parenthetical groups
}

bool issame(vector<string> a, vector<string> b) {
    // Implement the function to compare two vectors of strings
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    
    return 0;
}