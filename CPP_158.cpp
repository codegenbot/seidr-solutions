string find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;

    for (string word : words) {
        int unique_chars = 0;
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());

        if (word.length() > max_unique_chars) {
            max_unique_chars = word.length();
            max_word = word;
        } else if (word.length() == max_unique_chars && word < max_word) {
            max_word = word;
        }
    }

    return max_word;
}