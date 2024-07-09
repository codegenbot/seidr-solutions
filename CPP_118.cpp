string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) {
            int left = i + 1;
            while (left < word.length() && !isalpha(word[left])) ++left;
            for (; left < word.length(); ++left) {
                if (isvowel(word[left])) {
                    result = string(1, tolower(word[left]));
                    return result;
                }
            }
        }
    }
    return result;
}