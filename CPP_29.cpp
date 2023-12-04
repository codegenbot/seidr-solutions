```
vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].substr(0, prefix.length()) == prefix) {
            result.push_back(strings[i]);
        }
    }
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange"};
    string prefix = "a";
    vector<string> filteredStrings = filter_by_prefix(strings, prefix);
    for (auto& s : filteredStrings) {
        cout << s << endl;
    }
    return 0;
}
```