string longest(vector<string> strings){
    if(strings.empty()) return "";
    string res = strings[0];
    for(auto s : strings) {
        if(s.size() > res.size()) res = s;
    }
    return res;
}