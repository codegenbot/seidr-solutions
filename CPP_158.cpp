string find_max(vector<string> words){
    string maxWord = "";
    int maxCount = 0;

    for (string word : words) {
        int count = 0;
        vector<char> uniqueChars;

        for (char c : word) {
            if (find(uniqueChars.begin(), uniqueChars.end(), c) == uniqueChars.end()) {
                uniqueChars.push_back(c);
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