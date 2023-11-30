vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filtered_strings;
    for (string str : strings){
        if (str.find(prefix) == 0){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}