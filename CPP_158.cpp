string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;
    
    // Iterate through the vector of words
    for (const auto& word : words) {
        int uniqueChars = 0;
        string sortedWord = word;
        
        // Sort the word in lexicographical order
        sort(sortedWord.begin(), sortedWord.end());
        
        // Count the number of unique characters
        for (int i = 0; i < sortedWord.size(); i++) {
            if (i == 0 || sortedWord[i] != sortedWord[i - 1]) {
                uniqueChars++;
            }
        }
        
        // Update the result if necessary
        if (uniqueChars > maxUniqueChars) {
            result = word;
            maxUniqueChars = uniqueChars;
        }
    }
    
    return result;
}