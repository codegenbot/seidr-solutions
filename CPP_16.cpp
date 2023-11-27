int count_distinct_characters(string str) {
    vector<char> distinct_chars;
    
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Iterate through each character in the string
    for (char c : str) {
        // Check if the current character is already in the vector
        if (find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()) {
            // If the character is not in the vector, add it
            distinct_chars.push_back(c);
        }
    }
    
    // Return the number of distinct characters in the vector
    return distinct_chars.size();
}