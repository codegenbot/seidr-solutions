bool issame(string s1, string s2) {
    vector<string> result;
    for (const auto& str : s1) {
        if (str.find(s2) != string::npos) {
            result.push_back(str);
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (issame(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}