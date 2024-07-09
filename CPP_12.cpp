string longest(vector<string> strings){
    if(strings.empty()) return ""; // Return None in case the input vector is empty.
    string result = strings[0];
    for(auto str:strings){
        if(str.length() > result.length()) result = str;
        else if(str.length() == result.length()) result = str; // Return the first one in case of multiple strings of the same length.
    }
    return result;
}