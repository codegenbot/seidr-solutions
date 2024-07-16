string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    int right_consonant = -1;
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) == string::npos) {
            right_consonant = i;
            break;
        }
    }
    if (right_consonant == -1) {
        return "";
    }
    for (int i = right_consonant - 1; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        }
    }
    return "";
}