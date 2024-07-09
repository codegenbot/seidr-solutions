vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set from the characters in c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in the input string s
    for (char c : s) {
        // If the current character is not in the set, add it to the temporary string
        if (!c_set.count(c)) {
            temp += c;
        }
    }
    
    // Check if the temporary string is palindrome or not
    bool is_palindrome = false;
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] != temp[temp.size() - i - 1]) {
            is_palindrome = false;
            break;
        } else {
            is_palindrome = true;
        }
    }
    
    // Store the result in a vector and return it
    result.push_back(temp);
    if (is_palindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}