string find_max(vector<string> words){
    string maxWord = *minmax_element(words.begin(), words.end(),
        [](const auto& a, const auto& b) {
            return tie(a.size(), count(a.begin(), a.end, isalpha)) <
                   tie(b.size(), count(b.begin(), b.end, isalpha));
        }).first;
    return maxWord;
}