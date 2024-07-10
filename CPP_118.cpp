string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 2; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        bool left_consonant = true;
        for (int j = 1; j < i; ++j) {
            if (!isalpha(word[j])) continue;
            if (!isupper(word[j]) && !islower(word[j] - 'a' + 'A')) left_consonant = false;
            break;
        }
        bool right_consonant = true;
        for (int j = i; j < n; ++j) {
            if (!isalpha(word[j])) continue;
            if (!isupper(word[j]) && !islower(word[j] - 'a' + 'A')) right_consonant = false;
            break;
        }
        if (left_consonant && right_consonant) {
            for (char c : {"A", "E", "I", "O", "U", "a", "e", "i", "o", "u"}) {
                int index = i - 1;
                while (index >= 0 && !isalpha(word[index])) --index;
                if (word.substr(index + 1, i - index - 1).find(c) != string::npos)
                    return c;
            }
        }
    }
    return "";
}