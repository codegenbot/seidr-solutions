string longest(vector<string> strings){
    if(strings.empty()) {
        return "None";
    }
    string longestStr = strings[0];
    for(auto s : strings) {
        if(s.length() > longestStr.length()) {
            longestStr = s;
        }
    }
    return longestStr;
}