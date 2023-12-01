int count_distinct_characters(string str){
    vector<char> distinct_chars;
    transform(str.begin(), str.end(), str.begin(), ::tolower); // Convert all characters to lowercase
    for(char c : str){
        if(find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()){ // Check if the character is already in the vector
            distinct_chars.push_back(c); // If not, add it to the vector
        }
    }
    return distinct_chars.size(); // Return the number of distinct characters found
}