bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
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
    vector<string> input_strings = {"apple", "banana", "cherry", "date"};
    string input_substring = "an";
    vector<string> result = filter_by_substring(input_strings, input_substring);

    return 0;
}