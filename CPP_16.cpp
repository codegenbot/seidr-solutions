int count_distinct_characters(string str){
    // Convert the string to lowercase to consider characters regardless of case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Create a vector to store distinct characters
    vector<char> distinctChars;
    
    // Iterate through each character in the string
    for(int i = 0; i < str.length(); i++){
        // Check if the character is already present in the distinctChars vector
        if(find(distinctChars.begin(), distinctChars.end(), str[i]) == distinctChars.end()){
            // If not present, add it to the vector
            distinctChars.push_back(str[i]);
        }
    }
    
    // Return the number of distinct characters
    return distinctChars.size();
}