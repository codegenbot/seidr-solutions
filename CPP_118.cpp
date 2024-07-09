string get_closest_vowel(string word) {
    string result = "";
    for (int i = 0; i < word.size(); i++) {
        if (!isalpha(word[i])) continue;
        char prev = 'a';
        for (int j = i + 1; j <= word.size(); j++) {
            if (!isalpha(word[j])) break;
            if (word[j] != prev) {
                if (word[j] == 'A' || word[j] == 'E' || word[j] == 'I' || 
                    word[j] == 'O' || word[j] == 'U') {
                    result = string(1, toupper(word[j]));
                    return result;
                }
            }
            prev = word[j];
        }
    }
    return result;
}