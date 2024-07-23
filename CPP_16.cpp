transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<int> count(26);
    for (char c : str) {
        if (isalpha(c)) {
            count[c - 'a']++;
        }
    }
    int distinctCount = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            distinctCount++;
        }
    }
    return distinctCount;
}