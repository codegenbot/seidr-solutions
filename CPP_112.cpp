vector<string> reverse_delete(string s, string c) {
    // Remove characters in s that are in c
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    
    // Check if the result string is a palindrome
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    bool is_palindrome = (s == reversed_s);
    
    // Return the result string and the palindrome check result
    return {s, is_palindrome ? "True" : "False"};
}