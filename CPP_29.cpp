vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (string s : strings) {
        if (s.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

int main() {
    // Add test cases to verify the solution
    vector<string> strings = {"apple", "banana", "cherry", "date", "elderberry"};
    string prefix = "b";
    vector<string> result = filter_by_prefix(strings, prefix);
    for (string s : result) {
        cout << s << " ";
    }
    return 0;
}