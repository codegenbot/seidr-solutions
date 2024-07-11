string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' || word[i] == 'y') return "U";
        if (word[i] == 'y') return "u";
        if (word[i] == 'E' || word[i] == 'e') return "E";
        if (word[i] == 'A' || word[i] == 'a') return "A";
        if (word[i] == 'I' || word[i] == 'i') return "I";
        if (word[i] == 'O' || word[i] == 'o') return "O";
    }
    return "";
}