bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filtered_strings;
    for (const string &str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    vector<string> strings = {"apple", "banana", "grape", "orange"};
    vector<string> filtered = filter_by_substring(strings, "an");

    return 0;
}