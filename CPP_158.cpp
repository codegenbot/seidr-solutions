string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueCount = 0;

    for (string word : words) {
        int uniqueCount = 0;
        for (char c : word) {
            if (count(word.begin(), word.end(), c) == 1) {
                uniqueCount++;
            }
        }

        if (uniqueCount > maxUniqueCount || (uniqueCount == maxUniqueCount && word < maxWord)) {
            maxUniqueCount = uniqueCount;
            maxWord = word;
        }
    }

    return maxWord;
}