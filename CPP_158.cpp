string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() > max_word.size() || (word.size() == max_word.size() && count(word.begin(), word.end(), unique_copy(word.begin(), word.end())) > count(max_word.begin(), max_word.end(), unique_copy(max_word.begin(), max_word.end())))) {
            max_word = word;
        }
    }
    return max_word;
}