vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters from string c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        if (find(cSet.begin(), cSet.end(), ch) == cSet.end()) {
            temp += ch;  // If character is not in set, add it to the result
        }
    }
    
    // Check if the result string is palindrome
    bool isPalindrome = false;
    for (int i = 0; i < temp.length() / 2; i++) {
        if (temp[i] != temp[temp.length() - i - 1]) {
            isPalindrome = false;
            break;
        }
        isPalindrome = true;
    }
    
    // Add the result string and palindrome check to the vector
    result.push_back(temp);
    result.push_back((isPalindrome ? "True" : "False"));
    
    return result;
}