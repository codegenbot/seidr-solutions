string find_max(vector<string> words){
    string maxWord = words[0];
    int maxUniqueChars = 0;

    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        int uniqueChars = 0;
        vector<bool> visited(26, false); // To keep track of visited characters

        for (int j = 0; j < word.length(); j++) {
            if (!visited[word[j] - 'a']) {
                visited[word[j] - 'a'] = true;
                uniqueChars++;
            }
        }

        if (uniqueChars > maxUniqueChars) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        } else if (uniqueChars == maxUniqueChars && word < maxWord) {
            maxWord = word;
        }
    }

    return maxWord;
}