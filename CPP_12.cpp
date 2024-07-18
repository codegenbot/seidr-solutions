string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    
    string longestStr = strings[0];
    for(const string& str : strings){
        if(str.size() > longestStr.size() || (str.size() == longestStr.size() && str < longestStr)){
            longestStr = str;
        }
    }
    
    return longestStr;
}