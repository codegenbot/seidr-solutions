vector<string> reverse_delete(string s, string c) {
    // Create a set of characters to be deleted for quick lookup
    unordered_set<char> to_delete(c.begin(), c.end());
    
    // Filter out characters from s that are in to_delete set
    string filtered;
    for (char ch : s) {
        if (to_delete.find(ch) == to_delete.end()) {
            filtered.push_back(ch);
        }
    }
    
    // Check if the filtered string is a palindrome
    string reversed_filtered = filtered;
    reverse(reversed_filtered.begin(), reversed_filtered.end());
    bool is_palindrome = (filtered == reversed_filtered);
    
    // Return the result string and palindrome check result
    return {filtered, is_palindrome ? "True" : "False"};
}