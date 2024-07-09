string longest(vector<string> strings){
    if(strings.empty()) return "";
    string res = strings[0];
    for(auto s : strings){
        if(s.length() > res.length()) res = s;
        else if(s.length() == res.length()) res = s;  // keep the first one in case of multiple longest strings
    }
    return res;
}