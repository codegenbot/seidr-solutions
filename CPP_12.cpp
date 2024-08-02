string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longest = strings[0];
    for(auto s : strings){
        if(s.length() > longest.length()){
            longest = s;
        }
        else if(s.length() == longest.length())
            longest = s; // Return the first one in case of multiple strings of the same length.
    }
    return longest;
}