int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> charExists(26, false);
    int count = 0;
    
    for(char c : str) {
        if(isalpha(c) && !charExists[c - 'a']) {
            charExists[c - 'a'] = true;
            count++;
        }
    }
    
    return count;
}