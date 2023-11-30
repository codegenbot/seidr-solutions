vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filteredStrings;
    for (string s : strings) {
        if (s.find(substring) != string::npos) {
            filteredStrings.push_back(s);
        }
    }
    return filteredStrings;
}