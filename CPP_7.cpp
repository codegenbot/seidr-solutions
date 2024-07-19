bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    vector<string> strings = {"apple", "banana", "orange", "grape"};
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