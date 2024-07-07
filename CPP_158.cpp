string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() * unique(word).size() > unique(result).size()) {
            result = word;
        }
    }
    return result;
}