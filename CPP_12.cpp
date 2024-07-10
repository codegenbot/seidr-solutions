string longest(vector<string> strings){
    if(strings.empty()) return "";
    string res = strings[0];
    for(string s : strings){
        if(s.length() > res.length()){
            res = s;
        }
    }
    return res;
}