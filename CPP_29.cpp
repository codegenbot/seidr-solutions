bool issame(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "peach"};
    string prefix = "app";
    vector<string> result = filter_by_prefix(strings, prefix);
    for (const auto& str : result) {
        if (!issame(prefix, str)) {
            continue;
        }
        cout << str << endl;
    }
    return 0;
}