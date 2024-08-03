bool issame(const string& str1, const string& str2) {
    return str1 == str2;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0 || issame(str.substr(0, prefix.size()), prefix)) {
            result.push_back(str);
        }
    }
    return result;
}