string find_max(vector<string> words) {
    string maxWord = "";

    for (const string& word : words) {
        if (word.size() > maxWord.size() || (word.size() == maxWord.size() && word < maxWord)) {
            vector<bool> charSet(26, false);
            int uniqueChars = 0;

            for (char ch : word) {
                if (!charSet[ch - 'a']) {
                    charSet[ch - 'a'] = true;
                    uniqueChars++;
                }
            }

            if (uniqueChars > maxWord.size() || (uniqueChars == maxWord.size() && word < maxWord)) {
                maxWord = word;
            }
        }
    }

    return maxWord;
}