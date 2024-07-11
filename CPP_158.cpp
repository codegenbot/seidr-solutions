string find_max(vector<string> words){
    string result = words[0];
    int maxUnique = 0;
    for (int i = 1; i < words.size(); i++) {
        int uniqueCount = 0;
        set<char> charSet(words[i].begin(), words[i].end());
        for (char c : charSet) {
            if (count(charSet.begin(), charSet.end(), c) == 1)
                uniqueCount++;
        }
        if (uniqueCount > maxUnique || (uniqueCount == maxUnique && words[i] < result)) {
            result = words[i];
            maxUnique = uniqueCount;
        }
    }
    return result;
}