int count_distinct_characters(string str){ 
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> seen(26, false);
    for(char c : str) {
        if(isalpha(c)) {
            seen[c - 'a'] = true;
        }
    }
    return count(seen.begin(), seen.end(), true);
}