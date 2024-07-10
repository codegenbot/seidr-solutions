string longest(vector<string> strings){
    if(strings.empty())
        return "";
    string result = strings[0];
    for(auto s : strings){
        if(s.size() > result.size())
            result = s;
    }
    return result;
}