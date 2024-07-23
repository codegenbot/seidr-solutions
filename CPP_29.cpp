vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (const auto& str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}