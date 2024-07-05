transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> seen(26, false);
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && !seen[c - 'a']) {
            seen[c - 'a'] = true;
            count++;
        }
    }
    return count;
}