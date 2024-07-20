string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() == result.size()) {
            if (result < word) {
                result = word;
            }
        } else if (word.size() > result.size()) {
            result = word;
        }
    }
    return result;
}