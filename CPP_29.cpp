bool is_same(const string& s1, const string& s2) {
    return s1 == s2;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot"};
    string prefix = "a";
    vector<string> result = filter_by_prefix(strings, prefix);
    
    for (const auto& str : result) {
        if (!is_same(str, prefix)) {
            cout << str << endl;
        }
    }
    
    return 0;
}