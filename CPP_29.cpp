vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.length() >= prefix.length() && str.substr(0, prefix.length()) == prefix){
            result.push_back(str);
        }
    }
    return result;
}