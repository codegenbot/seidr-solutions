string find_max(vector<string> words){
    string result = "";
    int maxUnique = 0;
    for (const string& word : words) {
        int uniqueChars = set<string>(word.begin(), word.end()).size();
        if (uniqueChars > maxUnique || (uniqueChars == maxUnique && word < result)) {
            maxUnique = uniqueChars;
            result = word;
        }
    }
    return result;
}