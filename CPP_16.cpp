int count_distinct_characters(string str) {
  // Convert the string to lowercase
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  // Create a vector to store the distinct characters
  vector<char> distinct_chars;

  // Iterate through each character in the string
  for (char c : str) {
    // Check if the character is already in the vector
    if (find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()) {
      // If not, add it to the vector
      distinct_chars.push_back(c);
    }
  }

  // Return the number of distinct characters
  return distinct_chars.size();
}