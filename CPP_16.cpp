int count_distinct_characters(string str) {
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Create a vector to store distinct characters
    vector<char> distinctChars;
    
    // Traverse the string and add each distinct character to the vector
    for (char c : str) {
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            distinctChars.push_back(c);
        }
    }
    
    // Return the number of distinct characters
    return distinctChars.size();
}