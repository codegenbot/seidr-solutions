string result;
    int maxUniqueChars = 0;
    for (const auto& word : words) {
        int uniqueChars = unordered_set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < result)) {
            maxUniqueChars = uniqueChars;
            result = word;
        }
    }
    return result;
}