transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<int> count(26);
    int distinct_count = 0;
    for (char c : str) {
        if (isalpha(c) && count[c - 'a'] == 0) {
            count[c - 'a'] = 1;
            distinct_count++;
        }
    }
    return distinct_count;
}