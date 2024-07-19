string get_closest_vowel(const string& word) {
    string vowels = "aeiouAEIOU";
    int idx = -1;
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        return "";
    }
    for (int j = idx - 1; j > 0; --j) {
        if (vowels.find(word[j]) == string::npos) {
            return string(1, word[idx]);
        }
    }
    return "";
}