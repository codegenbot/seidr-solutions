string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() > result.size() || (word.size() == result.size() && unordered_set<char>(word.begin(), word.end()).size() > unordered_set<char>(result.begin(), result.end()).size())) {
            result = word;
        }
    }
    return result;
}