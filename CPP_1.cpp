vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b);

assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));