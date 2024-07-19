bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

bool issame(vector<string> a, vector<string> b);

assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));