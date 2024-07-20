vector<string> separate_paren_groups(string paren_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<string> result = separate_paren_groups("(hello)(world)");
    assert(issame(result, {"hello", "world"}));
    return 0;
}