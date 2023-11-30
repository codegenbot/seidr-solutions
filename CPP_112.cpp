vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string new_s;
    
    // Delete characters in s that are equal to any character in c
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            new_s += ch;
        }
    }
    
    // Check if the result string is palindrome
    string reverse_s = new_s;
    reverse(reverse_s.begin(), reverse_s.end());
    
    result.push_back(new_s);
    result.push_back(new_s == reverse_s ? "True" : "False");
    
    return result;
}