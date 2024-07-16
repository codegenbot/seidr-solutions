transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> seen(256, false);
    int count = 0;
    
    for (char c : str) {
        if (!seen[c]) {
            seen[c] = true;
            count++;
        }
    }
    
    return count;
}