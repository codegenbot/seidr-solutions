string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longest_str = strings[0];
    for(auto s : strings){
        if(s.length() > longest_str.length()){
            longest_str = s;
        }
    }
    return longest_str;
}