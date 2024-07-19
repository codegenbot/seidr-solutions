vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for(int i = 0; i < str.size(); ++i){
        prefix += str[i];
        result.push_back(prefix);
    }
    return result;
}