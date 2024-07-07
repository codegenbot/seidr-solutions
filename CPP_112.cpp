vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters to be deleted from string s
    set<char> delete_chars(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char c : s) {
        // If the character is not in the set of characters to be deleted, add it to the temporary string
        if (!delete_chars.count(c)) {
            temp += c;
        }
    }
    
    // Check if the temporary string is palindrome
    bool is_palindrome = (temp == reverse(temp));
    
    // Add the result and the check to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}