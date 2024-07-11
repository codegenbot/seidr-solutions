string get_closest_vowel(string word) {
    for (int i = 0; i < word.size(); ++i) {
        if (!isalpha(word[i])) continue;
        bool found_left_consonant = false;
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (!isvowel(word[j])) {
                found_left_consonant = true;
                break;
            }
        }
        if (found_left_consonant) {
            for (int j = i + 1; j < word.size(); ++j) {
                if (!isalpha(word[j])) continue;
                if (!isvowel(word[j])) break;
            }
            return string(1, tolower(word[i]));
        }
    }
    return "";
}