string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const auto& a, const auto& b) {
            return count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) <
                   count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
        }).first;
    return result;
}