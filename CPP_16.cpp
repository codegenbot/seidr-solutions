int count_distinct_characters(string str){
    vector<char> distinctChars;
    
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Iterate over each character in the string
    for(char c : str){
        // Check if the character is already in the distinctChars vector
        if(find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()){
            // If not found, add the character to the distinctChars vector
            distinctChars.push_back(c);
        }
    }
    
    // Return the size of the distinctChars vector
    return distinctChars.size();
}