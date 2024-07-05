vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            filtered.push_back(str);
        }
    }
    return filtered;
}