vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in string s
    for (char c_s : s) {
        // Check if the character is not in set c_set
        if (c_set.count(c_s) == 0) {
            // Add the character to the result string
            res += c_s;
        }
    }
    
    // Check if the result string is palindrome or not
    bool is_palindrome = true;
    int start = 0, end = res.length() - 1;
    while (start < end) {
        if (res[start] != res[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    // Add the result string and palindrome status to the vector
    result.push_back(res);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}