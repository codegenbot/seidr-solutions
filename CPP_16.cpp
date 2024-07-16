transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<int> freq(26, 0);
    for (char c : str) {
        if (isalpha(c)) {
            freq[c - 'a']++;
        }
    }
    int count = 0;
    for (int f : freq) {
        if (f > 0) {
            count++;
        }
    }
    return count;
}