string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < word.size(); i++) {
        if (!isalpha(word[i])) continue;
        bool found_consonant_before = true;
        for (int j = i - 1; j >= 0 && !isalpha(word[j]); j--) {
            if (j == 0) {
                found_consonant_before = false;
                break;
            }
        }
        if (!found_consonant_before) continue;
        bool found_vowel_after = true;
        for (int j = i + 1; j < word.size() && !isalpha(word[j]); j++) {
            if (j == word.size() - 1) {
                found_vowel_after = false;
                break;
            }
        }
        if (!found_vowel_after) continue;
        for (char c : vowels) {
            int pos = i + 1;
            while (pos < word.size() && tolower(word[pos]) != tolower(c)) pos++;
            if (pos < word.size()) return string(1, c);
        }
    }
    return "";
}