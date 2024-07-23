string longest(vector<string> strings){
    if(strings.empty()) return "None";
    string result = strings[0];
    for(const string& s : strings){
        if(s.length() > result.length() || (s.length() == result.length() && s < result)){
            result = s;
        }
    }
    return result;
}