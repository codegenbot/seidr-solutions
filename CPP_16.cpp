transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> charSet(26, false);
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && !charSet[c - 'a']) {
            charSet[c - 'a'] = true;
            count++;
        }
    }
    return count;
}