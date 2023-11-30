int count_distinct_characters(string str) {
    // convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // create a vector to store the distinct characters
    vector<char> distinctChars;
    
    // iterate through each character in the string
    for (char c : str) {
        // check if the character is already in the vector
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            // if it's not in the vector, add it
            distinctChars.push_back(c);
        }
    }
    
    // return the number of distinct characters
    return distinctChars.size();
}