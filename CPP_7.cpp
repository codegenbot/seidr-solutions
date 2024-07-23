bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

int main() {
    vector<string> strings = {"hello", "world", "hellO", "helloworld"};
    string substring = "ell";
    vector<string> result = filter_by_substring(strings, substring);
    for (const auto& s : result) {
        bool same = issame(transform(s.begin(), s.end(), ::tolower), transform(substring.begin(), substring.end(), ::tolower));
        cout << s << ": " << same << endl;
    }
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}