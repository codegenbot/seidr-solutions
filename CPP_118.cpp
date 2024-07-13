string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n; i++) {
        if (!isalpha(word[i]))
            continue;
        bool found = false;
        for (int j = i + 1; j < n; j++) {
            if (!isalpha(word[j])) {
                found = true;
                break;
            }
        }
        if (found) {
            for (int j = i - 1; j >= 0; j--) {
                if (!isalpha(word[j])) {
                    found = false;
                    break;
                }
            }
            if (found)
                return string(1, tolower(word[i]));
        }
    }
    return "";
}