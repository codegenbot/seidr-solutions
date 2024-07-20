string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto s : strings) {
        if(s.length() > result.length()) {
            result = s;
        } else if(s.length() == result.length()) {
            result = s; // in case of multiple strings of the same length, return the first one
        }
    }
    return result;
}