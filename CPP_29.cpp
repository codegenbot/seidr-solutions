vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filtered_strings;
    for (const auto &str : strings) {
        if (str.compare(0, prefix.size(), prefix) == 0) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}