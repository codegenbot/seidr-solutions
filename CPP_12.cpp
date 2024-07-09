string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longestSoFar = strings[0];
    for(string s : strings){
        if(s.length() > longestSoFar.length())
            longestSoFar = s;
    }
    return longestSoFar;
}