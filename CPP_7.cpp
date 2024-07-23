bool issame(string s1, string s2) {
    bool flag = true;
    if (s1.length() != s2.length()) {
        flag = false;
    } else {
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main() {
    vector<string> strings;
    string substring;

    cin >> substring;
    
    for(int i=0; i<3; ++i) {
        string s;
        cin >> s;
        strings.push_back(s);
    }

    vector<string> result = filter_by_substring(strings, substring);

    for (const auto& s : result) {
        bool is_same = false;
        for (int i = 0; i < 3; ++i) {
            if (!issame(substring, strings[i])) {
                is_same = true;
                break;
            }
        }
        if (!is_same)
            cout << s << endl;
    }

    return 0;
}