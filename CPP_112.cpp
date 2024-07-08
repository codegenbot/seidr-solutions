vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in s
    for (char ch : s) {
        // If the character is not in c, add it to the result
        if (c_set.find(ch) == c_set.end()) {
            res += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool is_palindrome = true;
    for (int i = 0; i < res.length() / 2; i++) {
        if (res[i] != res[res.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    
    // Store the result and palindrome status in a vector
    result.push_back(res);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}