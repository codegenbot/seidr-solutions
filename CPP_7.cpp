int main() {
    int n;
    cin >> n;

    vector<string> strings;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); 
        strings.push_back(s);
    }

    string substring;
    getline(cin, substring);

    bool isSame = issame(strings[0], strings[1]);
    vector<string> result = filter_by_substring(substring, strings);

    for (const auto& str : result) {
        cout << str << endl;
    }
}

bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

vector<string> filter_by_substring(const string& substring, const vector<string>& strings) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}