string find_max(vector<string> words) {
    string result = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() > result.size() || (word.size() == result.size() && count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) < result.size())) {
            result = word;
        }
    }
    return result;
}