bool issame(const string& s1, const string& s2) {
    size_t pos = 0;
    for (char c : s1) {
        if (pos >= s2.size() || c != s2[pos]) {
            return false;
        }
        pos++;
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "apples"};
    string prefix = "app";
    vector<string> result = filter_by_prefix(strings, prefix);
    for (const auto& str : result) {
        if (issame(prefix, str)) {
            cout << str << endl;
        }
    }
    return 0;
}