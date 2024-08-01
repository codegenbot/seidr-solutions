bool issame(string s1, string s2) {
    bool b = true;
    if (s1.size() != s2.size()) {
        b = false;
    } else {
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                b = false;
                break;
            }
        }
    }
    return b;
}

int main() {
    vector<string> strings;
    string prefix, str;
    
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> str;
        strings.push_back(str);
    }
    
    cout << "Enter the prefix: ";
    cin >> prefix;
    
    vector<string> result = filter_by_prefix(strings, prefix);
    
    if (!result.empty()) {
        for (const auto& s : result) {
            bool same = false;
            for (int i = 0; i < strings.size(); i++) {
                if (issame(s, strings[i])) {
                    same = true;
                    break;
                }
            }
            if (!same) {
                cout << "The string '" << s << "' is unique." << endl;
            }
        }
    } else {
        cout << "No strings match the prefix." << endl;
    }
    
    return 0;
}