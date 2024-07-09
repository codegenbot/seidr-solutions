string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i != n - 1) continue;
        for (int j = i + 1; j < n; ++j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isdigit(word[j])) break;
            if (word[j] == 'Y') break;
            if (ispunct(word[i]) && word[j] == 'U' && i == n - 2) return "U";
            if (ispunct(word[i]) && word[j] == 'E' && i == n - 2) return "E";
            if (ispunct(word[i]) && word[j] == 'I' && i == n - 2) return "I";
            if (ispunct(word[i]) && word[j] == 'A' && i == n - 2) return "A";
            if (ispunct(word[i]) && word[j] == 'O' && i == n - 2) return "O";
            if (!ispunct(word[i])) {
                if (word[j] == 'a') return "a";
                if (word[j] == 'e') return "e";
                if (word[j] == 'i') return "i";
                if (word[j] == 'o') return "o";
                if (word[j] == 'u') return "u";
            }
        }
    }
    return "";
}