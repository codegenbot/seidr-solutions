vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filtered_strings;
    for (const auto &s : strings) {
        if (s.find(prefix) == 0) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}