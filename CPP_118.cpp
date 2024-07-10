string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < word.size(); ++i) {
        if (!isalnum(word[i])) continue;
        bool found = false;
        for (int j = i + 1; j < word.size() && !found; ++j) {
            if (!isalnum(word[j])) continue;
            for (char c : vowels) {
                if (word[j] == c) {
                    return string(1, c);
                    found = true;
                    break;
                }
            }
        }
    }
    return "";
}