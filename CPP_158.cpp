string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_chars_a = a.size() - count(a.begin(), a.end(), '*');
            int unique_chars_b = b.size() - count(b.begin(), b.end(), '*');
            return make_pair(unique_chars_a, a) < make_pair(unique_chars_b, b);
        });
    return max_word;
}