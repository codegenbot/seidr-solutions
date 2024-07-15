#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    // Implement the logic to check if vectors a and b are the same
}

vector<string> separate_paren_groups(string paren_string) {
    // Implement the logic to separate parenthesis groups
}

int main() {
    assert (issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
}