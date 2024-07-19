string find_max(vector<string> words) {
    string res = "";
    int max_unique = -1;
    
    for (const string& word : words) {
        int unique_chars = set<string>(word.begin(), word.end()).size();
        if (unique_chars > max_unique || (unique_chars == max_unique && word < res)) {
            max_unique = unique_chars;
            res = word;
        }
    }
    
    return res;
}