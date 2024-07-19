bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    vector<string> strings = {"apple", "banana", "grape", "orange"};
    string substring = "an";
    vector<string> filtered_strings = filter_by_substring(strings, substring);
    
    assert(issame(filtered_strings, vector<string>{"banana", "orange"}));
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}