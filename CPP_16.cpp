int count_distinct_characters(string str){ 
    vector<bool> seen(26, false);
    for(char c : str) {
        if(isalpha(c)) {
            seen[tolower(c) - 'a'] = true;
        }
    }
    return count(seen.begin(), seen.end(), true);
}