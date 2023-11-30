string find_max(vector<string> words){
    string maxWord = "";
    int maxCount = 0;

    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        int count = 0;
        vector<bool> unique(26, false);

        for (int j = 0; j < word.length(); j++) {
            if (!unique[word[j] - 'a']) {
                unique[word[j] - 'a'] = true;
                count++;
            }
        }

        if (count > maxCount || (count == maxCount && word < maxWord)) {
            maxCount = count;
            maxWord = word;
        }
    }

    return maxWord;
}