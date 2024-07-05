string longest(vector<string> strings){
    if (strings.empty()) return "None";
    string longest_str = strings[0];
    for (const string& str : strings) {
        if (str.length() > longest_str.length()) {
            longest_str = str;
        }
    }
    return longest_str;
}