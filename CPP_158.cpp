string find_max(vector<string> words){
    string res = words[0];
    int maxUnique = 0;
    for (const auto& word : words) {
        int uniqueCount = std::unique(word.begin(), word.end()).base() - word.begin();
        if (uniqueCount > maxUnique || (uniqueCount == maxUnique && word < res)) {
            maxUnique = uniqueCount;
            res = word;
        }
    }
    return res;
}