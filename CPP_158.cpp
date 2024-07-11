string find_max(vector<string> words){
    string result = words[0];
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        unordered_set<char> uniqueChars(word.begin(), word.end());
        if (uniqueChars.size() > maxUniqueChars) {
            maxUniqueChars = uniqueChars.size();
            result = word;
        }
    }

    return result;
}