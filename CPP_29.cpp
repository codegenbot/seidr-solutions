vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].find(prefix) == 0) {
            result.push_back(strings[i]);
        }
    }
    return result;
}