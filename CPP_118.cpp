string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; i--) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            for (int j = i + 1; j < word.size(); j++) {
                char d = tolower(word[j]);
                if (!isalpha(d)) {
                    return string(1, toupper(c));
                }
            }
        }
    }
    return "";
}