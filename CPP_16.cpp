int count_distinct_characters(string str){ 
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Create a vector to store distinct characters
    vector<char> distinctChars;
    
    // Iterate through each character in the string
    for (char c : str) {
        // If the character is not already in the vector, add it
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            distinctChars.push_back(c);
        }
    }
    
    // Return the number of distinct characters
    return distinctChars.size();
}