string get_closest_vowel(string word) {
    for (int i = 0; i < word.length(); i++) {
        if (!isalpha(word[i])) continue;
        bool left_consonant = true;
        for (int j = i - 1; j >= 0; j--) {
            if (!isalpha(word[j]) || isvowel(word[j])) break;
            left_consonant = false;
        }
        if (left_consonant) continue;
        bool right_consonant = true;
        for (int j = i + 1; j < word.length(); j++) {
            if (!isalpha(word[j]) || isvowel(word[j])) break;
            right_consonant = false;
        }
        if (right_consonant) continue;
        return tolower(word[i]) == 'a' ? "a" : tolower(word[i]) == 'e' ? "e"
              : tolower(word[i]) == 'i' ? "i" : tolower(word[i]) == 'o' ? "o" : "u";
    }
    return "";
}