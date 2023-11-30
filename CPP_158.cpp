string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;

    for (string word : words) {
        int uniqueChars = 0;
        vector<int> charCount(26, 0);

        for (char c : word) {
            if (charCount[c - 'a'] == 0) {
                uniqueChars++;
            }
            charCount[c - 'a']++;
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < result)) {
            maxUniqueChars = uniqueChars;
            result = word;
        }
    }

    return result;
}