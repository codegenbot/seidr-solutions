int main() {
    vector<pair<string, string>> a = {{ "xxx", "xxx" }, { "xxxxAA", "xxxAAA" }};
    assert(issame(a));
    vector<string> strings = {"hello", "hell", "world"};
    vector<string> filteredStrings = filter_by_prefix(strings, "hel");
    for (const auto& s : filteredStrings) {
        cout << s << endl;
    }
    return 0;