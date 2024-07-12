transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> charSeen(26, false);
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && !charSeen[tolower(c) - 'a']) {
            charSeen[tolower(c) - 'a'] = true;
            count++;
        }
    }
    return count;
}