string longest(vector<string> strings) {
    if (strings.empty()) {
        return "None";
    }
    
    string longestString = strings[0];
    for (const string& str : strings) {
        if (str.length() > longestString.length() || (str.length() == longestString.length() && str < longestString)) {
            longestString = str;
        }
    }
    
    return longestString;
}