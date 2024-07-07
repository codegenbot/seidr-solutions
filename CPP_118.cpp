string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < word.length(); ++i) {
        if (!isalpha(word[i])) continue;
        bool left_consonant = true;
        for (int j = i - 1; j >= 0; --j) {
            if (isalpha(word[j]) && vowels.find(tolower(word[j])) != string::npos)
                return word.substr(j, i - j);
            if (!isalpha(word[j])) left_consonant = false;
        }
        if (!left_consonant) continue;
        bool right_consonant = true;
        for (int j = i + 1; j < word.length(); ++j) {
            if (isalpha(word[j]) && vowels.find(tolower(word[j])) != string::npos)
                return word.substr(i, j - i);
            if (!isalpha(word[j])) right_consonant = false;
        }
        if (!right_consonant) continue;
    }
    return "";
}