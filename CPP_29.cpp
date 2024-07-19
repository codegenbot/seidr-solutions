bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    vector<string> expected_result = {"xxx", "xxxAAA", "xxx"};
    
    vector<string> filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

    assert(issame(filtered_strings, expected_result));

    for (const auto& str : filtered_strings) {
        cout << str << " ";
    }

    return 0;
}