int count_distinct_characters(string str) {
    vector<char> distinctChars;
    
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Iterate through each character in the string
    for (char c : str) {
        // Check if the character is already in the distinctChars vector
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            // If not, add it to the vector
            distinctChars.push_back(c);
        }
    }
    
    // Return the number of distinct characters
    return distinctChars.size();
}