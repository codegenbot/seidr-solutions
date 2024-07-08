std::string longest(vector<string> strings){
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(auto str : strings){
        if(str.length() > result.length()){
            result = str;
        }
    }
    return result;
}