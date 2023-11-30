int count_distinct_characters(string str) {
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Initialize a vector to store the distinct characters
    vector<char> distinct_chars;

    // Iterate through each character in the string
    for (char c : str) {
        // If the character is not already in the vector, add it
        if (find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()) {
            distinct_chars.push_back(c);
        }
    }

    // Return the number of distinct characters
    return distinct_chars.size();
}