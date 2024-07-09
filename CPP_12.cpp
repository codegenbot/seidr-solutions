string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto s: strings) {
        if(s.length() > result.length()) {
            result = s;
        } else if (s.length() == result.length()) {
            result = s;  // Return the first one in case of multiple strings of the same length
        }
    }
    return result;
}