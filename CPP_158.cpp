string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;

    for (string word : words) {
        int uniqueChars = 0;
        bool charCount[26] = {false};

        for (char c : word) {
            if (!charCount[c - 'a']) {
                uniqueChars++;
                charCount[c - 'a'] = true;
            }
        }

        if (uniqueChars > maxUnique || (uniqueChars == maxUnique && word < maxWord)) {
            maxUnique = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}