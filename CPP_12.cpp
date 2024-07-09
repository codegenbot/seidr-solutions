Str longest(vector<Str> strings){
    if(strings.empty()) {
        return "";
    }
    Str result = strings[0];
    for(auto str : strings) {
        if(str.length() > result.length()) {
            result = str;
        } else if(str.length() == result.length()) {
            result = str;
        }
    }
    return result;
}