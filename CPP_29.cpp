vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (string s : strings) {
        if (s.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

int main() {
    // Test case 1
    vector<string> strings1 = {"apple", "banana", "cherry"};
    string prefix1 = "ap";
    vector<string> filtered1 = filter_by_prefix(strings1, prefix1);
    
    // Test case 2
    vector<string> strings2 = {"cat", "dog", "elephant"};
    string prefix2 = "e";
    vector<string> filtered2 = filter_by_prefix(strings2, prefix2);
    
    // Test case 3
    vector<string> strings3 = {"car", "bus", "bike"};
    string prefix3 = "b";
    vector<string> filtered3 = filter_by_prefix(strings3, prefix3);
    
    return 0;
}