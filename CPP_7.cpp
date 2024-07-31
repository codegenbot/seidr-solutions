vector<string> filter_by_substring(vector<string> strings, string substring);

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

int main() {
    vector<string> test_strings = {"apple", "banana", "orange", "grape"};
    string sub = "an";
    vector<string> result = filter_by_substring(test_strings, sub);
    vector<string> expected_result = {"banana", "orange"};
    assert(result == expected_result);
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}