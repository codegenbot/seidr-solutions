string find_max(vector<string> words) {
    string maxWord = words[0];
    int maxUniqueChars = 0;

    for (const string& word : words) {
        int uniqueChars = 0;
        vector<bool> visited(26, false);

        for (char c : word) {
            if (!visited[c - 'a']) {
                uniqueChars++;
                visited[c - 'a'] = true;
            }
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}