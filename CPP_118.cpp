string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; i--) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            for (int j = i - 1; j >= 0; j--) {
                if (!("aeiouAEIOU".find(word[j]) == string::npos)) {
                    return word.substr(j, i - j);
                }
            }
        }
    }
    return "";
}