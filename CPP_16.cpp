int count_distinct_characters(string str){
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Create a vector to store distinct characters
    vector<char> distinct_chars;

    // Iterate through each character in the string
    for(int i = 0; i < str.length(); i++){
        // Check if the character is already in the vector
        if(find(distinct_chars.begin(), distinct_chars.end(), str[i]) == distinct_chars.end()){
            // If not, add it to the vector
            distinct_chars.push_back(str[i]);
        }
    }

    // Return the number of distinct characters
    return distinct_chars.size();
}