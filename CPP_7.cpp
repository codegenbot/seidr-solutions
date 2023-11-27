vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filtered_strings;
    for (string s : strings) {
        if (s.find(substring) != string::npos) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

bool issame(vector<string> a, vector<string> b) {
    // Add your code here
    
}