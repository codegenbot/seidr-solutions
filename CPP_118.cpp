string get_closest_vowel(string word) {
    string result = "";
    for (int i = 0; i < word.size(); i++) {
        if (!isalpha(word[i])) continue;
        bool found = false;
        for (int j = i + 1; j < word.size(); j++) {
            if (!isalpha(word[j])) break;
            if (vowel(word[j])) {
                result = word[j];
                found = true;
                break;
            }
        }
        if (found) break;
    }
    return result;
}

bool vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}