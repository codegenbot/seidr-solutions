bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (!a[i].compare(0, a[i].size(), b[i], 0, a[i].size()))
            return true;
    return false;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry"};
    string prefix = "app";
    vector<string> result = filter_by_prefix(strings, prefix);
    bool sameStrings = issame({result[0], "application"}, {strings[0], strings[1]});
    return 0;
}