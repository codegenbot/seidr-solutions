transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> seen(26);
    int count = 0;
    
    for (char c : str) {
        if (isalpha(c) && !seen[tolower(c) - 'a']) {
            seen[tolower(c) - 'a'] = true;
            count++;
        }
    }
    
    return count;
}