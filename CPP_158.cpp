string find_max(vector<string> words) {
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) -> bool {
            return (a.size() != b.size()) || (count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]));
        });
    return max_word;
}