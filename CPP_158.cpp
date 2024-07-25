string maxWord;
    int maxUnique = 0;
    
    for (const auto& word : words) {
        int uniqueChars = set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUnique || (uniqueChars == maxUnique && word < maxWord)) {
            maxUnique = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}