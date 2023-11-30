vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const string& s : strings){
        if (s.substr(0, prefix.size()) == prefix){
            result.push_back(s);
        }
    }
    return result;
}