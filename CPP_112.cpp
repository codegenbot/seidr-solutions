vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string newString = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            newString += s[i];
        }
    }
    
    string reverseString = newString;
    reverse(reverseString.begin(), reverseString.end());
    
    result.push_back(newString);
    result.push_back(newString == reverseString ? "True" : "False");
    
    return result;
}