string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.length() - 1; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            int j;
            for (j = i - 1; j >= 0; j--) {
                if (vowels.find(word[j]) == string::npos)
                    break;
            }
            return word.substr(j + 1, i - j - 1);
        }
    }
    return "";
}