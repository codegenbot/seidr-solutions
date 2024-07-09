string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        unordered_map<char, bool> uniqueChars;
        int uniqueCount = 0;
        for (char c : word) {
            if (!uniqueChars.count(c)) {
                uniqueChars[c] = true;
                uniqueCount++;
            }
        }

        if (uniqueCount > maxUniqueChars || (uniqueCount == maxUniqueChars && word < result)) {
            maxUniqueChars = uniqueCount;
            result = word;
        }
    }

    return result;
}