string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; i--) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 0) continue;
        left = i + 1;
        break;
    }
    for (int i = left; i < word.size(); i++) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 0) continue;
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || 
            word[i] == 'O' || word[i] == 'U') {
            return string(1, topper(word[i]));
        }
    }
    return "";
}