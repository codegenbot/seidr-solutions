string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longestStr = strings[0];
    for(string str : strings){
        if(str.length() > longestStr.length()){
            longestStr = str;
        }
    }
    return longestStr;
}