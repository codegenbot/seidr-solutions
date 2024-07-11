string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
                                    [](const string& a, const string& b) {
                                        return std::count(a.begin(), a.end(), a[0]) == 0;
                                    });
    for (int i = 1; i <= 256; i++) {
        if (std::count(max_word.begin(), max_word.end(), i)) {
            return max_word;
        }
    }
    return max_word;
}