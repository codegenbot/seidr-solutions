vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings){
        if (s.substr(0, prefix.length()) == prefix){
            result.push_back(s);
        }
    }
    return result;
}