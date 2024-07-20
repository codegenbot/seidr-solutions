string find_max(vector<string> words){
    string maxWord;
    int maxUnique = 0;

    for (const auto& word : words) {
        int uniqueCount = 0;
        set<char> seen;
        for (char c : word) {
            if (!seen.count(c)) {
                seen.insert(c);
                uniqueCount++;
            }
        }

        if (uniqueCount > maxUnique || (uniqueCount == maxUnique && word < maxWord)) {
            maxWord = word;
            maxUnique = uniqueCount;
        }
    }

    return maxWord;
}