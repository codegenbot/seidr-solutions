string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && !std::tolower(word[i-1]).find('w') &&
            !std::tolower(word[i-1]).find('h')) continue;
        if (isvowel(std::toupper(word[i]))) return std::string(1, word[i]);
    }
    for (int i = 0; i < n - 1; ++i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && !std::tolower(word[i+1]).find('w') &&
            !std::tolower(word[i+1]).find('h')) continue;
        if (!isalpha(word[i + 1])) {
            for (int j = i + 1; j < n - 1; ++j) {
                if (!isalpha(word[j])) continue;
                if (ispunct(word[j]) || isdigit(word[j])) continue;
                if (word[j] == 'Y' && !std::tolower(word[j+1]).find('w') &&
                    !std::tolower(word[j+1]).find('h')) continue;
                if (isvowel(std::toupper(word[j]))) return std::string(1, word[j]);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = std::toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}