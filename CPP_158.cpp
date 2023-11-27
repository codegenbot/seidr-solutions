string find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;

    for (string word : words) {
        int unique_chars = 0;
        vector<char> unique_letters;

        for (char letter : word) {
            if (find(unique_letters.begin(), unique_letters.end(), letter) == unique_letters.end()) {
                unique_chars++;
                unique_letters.push_back(letter);
            }
        }

        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }

    return max_word;
}