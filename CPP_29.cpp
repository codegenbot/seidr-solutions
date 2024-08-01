```
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
    vector<string> strings;
    string prefix;
    
    cout << "Enter the list of strings: ";
    for (string str; cin >> str; ) {
        strings.push_back(str);
    }
    
    cout << "Enter the prefix: ";
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    for (const auto& str : result) {
        if (issame(prefix, str)) {
            cout << str << endl;
        }
    }

    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}