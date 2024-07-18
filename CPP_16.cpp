transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> charPresent(26, false);
    int count = 0;

    for (char c : str) {
        if (isalpha(c) && !charPresent[tolower(c) - 'a']) {
            charPresent[tolower(c) - 'a'] = true;
            count++;
        }
    }

    return count;
}