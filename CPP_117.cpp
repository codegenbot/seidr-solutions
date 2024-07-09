bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));