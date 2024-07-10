string find_max(vector<string> words){
    string result;
    int max_unique = 0;
    for (const string& word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique || (unique_chars == max_unique && word < result)) {
            result = word;
            max_unique = unique_chars;
        }
    }
    return result;
}