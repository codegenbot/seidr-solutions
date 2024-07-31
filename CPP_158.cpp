string maxWord;
    int maxUnique = 0;
    
    for (const string& word : words) {
        int unique = unordered_set<char>(word.begin(), word.end()).size();
        
        if (unique > maxUnique || (unique == maxUnique && word < maxWord)) {
            maxWord = word;
            maxUnique = unique;
        }
    }
    
    return maxWord;
}