vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp;
    
    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            temp += s[i];
        }
    }
    
    // Check if the result string is palindrome
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());
    
    if (temp == reversed) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    
    return result;
}