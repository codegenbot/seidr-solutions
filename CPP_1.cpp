bool issame(string s) {
    return all_of(s.begin(), s.end(), [&](char c) { return c == s[0]; });
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    // code here
}