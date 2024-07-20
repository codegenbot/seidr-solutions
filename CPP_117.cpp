bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 4), vector<string>{"a", "b", "c", "d"}));
    return 0;
}