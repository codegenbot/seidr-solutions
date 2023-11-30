int count_distinct_characters(string str) {
    vector<char> distinct_chars;

    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Iterate through each character in the string
    for (char c : str) {
        // Check if the character is already in the distinct_chars vector
        if (find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()) {
            // If not found, add the character to the vector
            distinct_chars.push_back(c);
        }
    }

    // Return the number of distinct characters
    return distinct_chars.size();
}