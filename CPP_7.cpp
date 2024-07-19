bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    vector<string> strings = {"apple", "banana", "cat", "dog", "elephant"};
    string substring = "a";
    
    vector<string> filtered = filter_by_substring(strings, substring);

    assert(issame(filtered, vector<string>{"apple", "cat"}));

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