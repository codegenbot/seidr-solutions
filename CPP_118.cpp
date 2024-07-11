string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int rightConsonantIdx = -1;
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) == string::npos) {
            rightConsonantIdx = i;
            break;
        }
    }
    if (rightConsonantIdx == -1) {
        return "";
    }
    for (int j = rightConsonantIdx - 1; j > 0; --j) {
        if (vowels.find(word[j]) != string::npos) {
            return string(1, word[j]);
        }
    }
    return "";
}