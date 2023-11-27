vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for(auto str : strings){
        if(str.substr(0, prefix.length()) == prefix){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}