transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> present(26, false);
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && !present[c - 'a']) {
            present[c - 'a'] = true;
            count++;
        }
    }
    return count;
}