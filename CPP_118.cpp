string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            result = string(1, c);
            break;
        }
    }
    return result;
}