// Add missing function declaration
bool issame(vector<string> a, vector<string> b);

// Fix function signature syntax error
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

// Fix missing function call
assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));