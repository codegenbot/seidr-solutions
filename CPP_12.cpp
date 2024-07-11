string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(string s : strings){
        if(s.length() > result.length()) result = s;
        else if(s.length() == result.length()) result = s;
    }
    return result;
}