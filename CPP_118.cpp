string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && tolower(word[i-1]) != 'u') continue;
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || 
            tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            result = string(1, word[i]);
            break;
        }
    }
    return result;
}