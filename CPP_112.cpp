vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    
    // Check if the result string is palindrome
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (s == reversed);
    
    result.push_back(s);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}