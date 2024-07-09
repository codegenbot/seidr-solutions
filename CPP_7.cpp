bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> filter_by_substring(const vector<string> &strings, const string &substring) {
    vector<string> filtered_strings;
    for (const string &str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange", "grape"};
    string substring = "an";
    vector<string> result = filter_by_substring(strings, substring);

    return 0;
}