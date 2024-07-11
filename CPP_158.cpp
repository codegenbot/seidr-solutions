string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() > max_word.size()) {
            max_word = word;
        }
        else if (word.size() == max_word.size()) {
            vector<char> char_set1(word.begin(), word.end()), char_set2(max_word.begin(), max_word.end());
            sort(char_set1.begin(), char_set1.end());
            sort(char_set2.begin(), char_set2.end());
            if (char_set1 != char_set2) {
                max_word = word;
            }
        }
    }
    return max_word;
}