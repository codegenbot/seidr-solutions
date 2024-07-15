for (int i = word.length() - 2; i > 0; --i) {
        if (isalpha(word[i]) && 
            strchr("aeiouAEIOU", word[i]) &&
            !strchr("aeiouAEIOU", word[i - 1]) &&
            !strchr("aeiouAEIOU", word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}