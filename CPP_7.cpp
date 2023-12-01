vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filteredStrings;
    for (const string& s : strings) {
        if (s.find(substring) != string::npos) {
            filteredStrings.push_back(s);
        }
    }
    return filteredStrings;
}