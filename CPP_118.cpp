string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            for (int j = i - 1; j >= 0; --j) {
                if ("bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ".find(word[j]) == string::npos) {
                    return word.substr(j + 1, i - j - 1);
                }
            }
        }
    }
    return "";
}