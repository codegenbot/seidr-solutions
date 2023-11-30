vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for (string str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}