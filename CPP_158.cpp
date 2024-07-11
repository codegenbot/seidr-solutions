string result;
    int maxUnique = 0;
    for (const string& word : words) {
        int uniqueChars = set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUnique || (uniqueChars == maxUnique && word < result)) {
            maxUnique = uniqueChars;
            result = word;
        }
    }
    return result;
}