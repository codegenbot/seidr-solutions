string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        bool isVowel = false;
        for (char c : "aeiouAEIOU") {
            if (word[i] == c) {
                isVowel = true;
                break;
            }
        }
        if (isVowel) {
            result = word.substr(i, 1);
            return result;
        }
    }
    return "";
}