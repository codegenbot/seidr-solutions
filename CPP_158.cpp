string maxWord = "";
    int maxUniqueChars = 0;

    for (const string& word : words) {
        int uniqueChars = 0;
        vector<bool> seen(26, false);

        for (char c : word) {
            if (!seen[c - 'a']) {
                seen[c - 'a'] = true;
                uniqueChars++;
            }
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}