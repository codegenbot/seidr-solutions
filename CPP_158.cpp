string find_max(vector<string> words){
    string result;
    int maxUnique = 0;
    sort(words.begin(), words.end());

    for (const string& word : words) {
        int uniqueChars = set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUnique) {
            result = word;
            maxUnique = uniqueChars;
        }
    }
    return result;
}