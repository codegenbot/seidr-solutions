vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookups
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // Check if the current character is not present in set c_set
        if (c_set.find(ch) == c_set.end()) {
            // If not, add it to the temporary string
            temp += ch;
        }
    }
    
    // Check if the result string is palindrome or not
    bool is_palindrome = true;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    // Store the result string and palindrome status in the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}