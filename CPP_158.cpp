string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        int uniqueChars = 0;
        bool charExists[26] = {false};

        for (int j = 0; j < word.length(); j++) {
            int index = word[j] - 'a';
            if (!charExists[index]) {
                charExists[index] = true;
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