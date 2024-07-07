string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longest = strings[0];
    for(string s : strings){
        if(s.length() > longest.length()){
            longest = s;
        }
        else if(s.length() == longest.length()){
            longest = s; // in case of multiple strings of the same length, return the first one
        }
    }
    return longest;
}