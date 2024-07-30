bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

void test_filter_by_substring() {
    vector<string> input = { "apple", "banana", "cherry", "date" };
    vector<string> expected_output = { "apple", "date" };
    assert(filter_by_substring(input, "a") == expected_output);
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filtered_strings;
    for (const string& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    test_filter_by_substring();
    return 0;
}