vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filteredStrings;
    for (string str : strings) {
        if (str.find(substring) != string::npos) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}