string get_closest_vowel(string word) {
    string result = "";
    for (int i = 0; i < word.length(); i++) {
        if (!isalpha(word[i])) continue;
        if (i == 0 || !isvowel(word[i])) continue;
        bool found = false;
        for (int j = i + 1; j < word.length(); j++) {
            if (!isalpha(word[j])) break;
            if (!isvowel(word[j])) continue;
            if (!found) result = word[j];
            found = true;
        }
    }
    return result;
}