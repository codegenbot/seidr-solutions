string find_max(vector<string> words) {
    string maxString;
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        int cnt[26] = {0};
        int uniqueChars = 0;
        for (char c : word) {
            if (cnt[c - 'a'] == 0) {
                ++uniqueChars;
            }
            ++cnt[c - 'a'];
        }
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxString)) {
            maxString = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxString;
}