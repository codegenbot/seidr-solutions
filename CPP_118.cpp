string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    int right_most_consonant = -1;
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) == string::npos) {
            right_most_consonant = i;
            break;
        }
    }
    if (right_most_consonant == -1) {
        return "";
    }
    for (int j = right_most_consonant - 1; j > 0; j--) {
        if (vowels.find(word[j]) != string::npos) {
            return string(1, word[j]);
        }
    }
    return "";
}