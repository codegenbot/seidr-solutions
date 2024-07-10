vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = count_if(word.begin(), word.end(), [](char c) { return !ispunct(c) && !isvowel(tolower(c)); }) == n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    bool has_n_consonants = count_if(word.begin(), word.end(), [](char c) { return !ispunct(c) && !isvowel(tolower(c)); }) == n;
    if (has_n_consonants) {
        result.push_back(word);
    }
    sort(result.begin(), result.end());
    return result;
}