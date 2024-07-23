string find_max(vector<string> words) {
    string maxWord;
    int maxUniqueChars = 0;

    for (const string& word : words) {
        string uniqueChars;
        for (char c : word) {
            if (uniqueChars.find(c) == string::npos) {
                uniqueChars += c;
            }
        }

        if (uniqueChars.size() > maxUniqueChars || 
            (uniqueChars.size() == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars.size();
        }
    }

    return maxWord;
}