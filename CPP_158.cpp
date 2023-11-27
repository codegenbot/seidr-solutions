string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for (string word : words) {
        int uniqueChars = 0;
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());

        for (char c : word) {
            uniqueChars++;
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}