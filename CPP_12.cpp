string longest(vector<string> strings){
    if(strings.empty()) {
        return "None";
    }
    
    int maxLen = 0;
    string longestStr = strings[0];
    
    for(const string& s : strings) {
        if(s.length() > maxLen || (s.length() == maxLen && s < longestStr)) {
            maxLen = s.length();
            longestStr = s;
        }
    }
    
    return longestStr;
}