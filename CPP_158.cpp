Here is the solution:

string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    int max_unique_chars = 0;
    for (auto& word : words) {
        int unique_chars = word.length();
        for (char c : word) {
            if (count(word.begin(), word.end(), c) > 1)
                unique_chars--;
        }
        if (unique_chars > max_unique_chars) {
            max_word = word;
            max_unique_chars = unique_chars;
        } else if (unique_chars == max_unique_chars && word < max_word)
            max_word = word;
    }
    return max_word;