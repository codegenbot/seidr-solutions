int count_distinct_characters(string str) {
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Create a vector to store the distinct characters
    vector<char> distinctChars;
    
    // Iterate through each character in the string
    for (char c : str) {
        // Check if the character is already in the vector
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            // If not, add it to the vector
            distinctChars.push_back(c);
        }
    }
    
    // Return the number of distinct characters
    return distinctChars.size();
}