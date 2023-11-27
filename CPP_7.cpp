vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].find(substring) != string::npos) {
            result.push_back(strings[i]);
        }
    }
    return result;
}