string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (strchr("aeiouAEIOU", word[i])) {
            int left = i + 1;
            while (left < word.size() && !strchr("aeiouAEIOU", word[left])) {
                ++left;
            }
            if (left < word.size()) {
                return string(1, word[left]);
            }
        }
    }
    return "";
}