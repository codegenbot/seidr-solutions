bool issame(const string& s1, const string& s2) {
    bool same = true;
    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] != s2[i]) {
            same = false;
            break;
        }
    }
    return same;
}

int main() {
    vector<string> strings;
    string prefix;

    cout << "Enter the number of strings: ";
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strings.push_back(s);
    }

    cout << "Enter the prefix: ";
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    if (!result.empty()) {
        cout << "Strings with the given prefix: ";
        for (const auto& str : result) {
            cout << str << " ";
        }
        cout << endl;
    } else {
        cout << "No strings found with the given prefix." << endl;
    }

    return 0;
}