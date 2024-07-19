bool issame(vector<string> a, vector<string> b) {
    return a == b; // Compare vectors a and b using ==
}

bool issame(vector<string> a, vector<string> b);

assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));