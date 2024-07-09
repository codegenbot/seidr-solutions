string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto str : strings){
        if(str.length() > result.length()){
            result = str;
        }
    }
    return result;
}