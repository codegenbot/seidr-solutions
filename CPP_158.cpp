string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for (string word : words) {
        int uniqueChars = 0;
        vector<bool> seen(26, false); // to keep track of characters seen

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