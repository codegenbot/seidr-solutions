```
std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            result = tolower(word[i]);
            break;
        }
    }
    return result;
}