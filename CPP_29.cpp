vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].substr(0, prefix.size()) == prefix) {
            filteredStrings.push_back(strings[i]);
        }
    }
    return filteredStrings;
}