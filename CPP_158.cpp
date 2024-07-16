int count_unique_chars(const string& word) {
    return unordered_set<char>(word.begin(), word.end()).size();
}

string find_max(vector<string> words){
    string max_word;
    int max_unique_chars = 0;

    for(const auto& word : words) {
        int unique_chars = count_unique_chars(word);

        if(unique_chars > max_unique_chars || 
           (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}