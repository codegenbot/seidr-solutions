string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longest = strings[0];
    for(string str : strings) {
        if(str.length() > longest.length()) {
            longest = str;
        } else if(str.length() == longest.length()) {
            longest = str;
        }
    }
    return longest;
}