string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longest = strings[0];
    for(string s : strings) {
        if(s.length() > longest.length())
            longest = s;
        else if(s.length() == longest.length())
            longest = s; // return the first one in case of multiple
    }
    return longest;
}