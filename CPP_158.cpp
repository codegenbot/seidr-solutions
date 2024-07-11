string find_max(vector<string> words){
    int max_unique = 0;
    string result = "";
    
    for (const string& word : words) {
        int unique_count = set<char>(word.begin(), word.end()).size();
        if (unique_count > max_unique || (unique_count == max_unique && word < result)) {
            max_unique = unique_count;
            result = word;
        }
    }
    
    return result;
}