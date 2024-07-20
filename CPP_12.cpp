string longest(vector<string> strings){
    if(strings.empty()) return ""; // Return None in case the input vector is empty.
    string res = strings[0];
    for(string s:strings){
        if(s.length() > res.length())
            res = s;
    }
    return res; // Return the first one in case of multiple strings of the same length.
}