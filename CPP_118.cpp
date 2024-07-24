string get_closest_vowel(string word) {
    string result = "";
    int i = 0;
    while (i < word.size()) {
        if (!isalpha(word[i])) i++;
        else if (strchr("aeiouAEIOU", tolower(word[i])) != NULL) {
            int j = i - 1;
            while (j >= 0 && !isalpha(word[j])) j--;
            if (j >= 0) {
                result = word.substr(j + 1, i - j - 1);
                return result;
            }
        }
        i++;
    }
    return result;
}