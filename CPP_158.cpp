string find_max(vector<string> words) {
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (int)(a.size() - count(a.begin(), a.end(), unique_copy(a.begin(), a.end()))) <
                   (int)(b.size() - count(b.begin(), b.end(), unique_copy(b.begin(), b.end())));
        }).first;
    return result;
}