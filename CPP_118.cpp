string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    int closest_vowel_idx = -1;

    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            closest_vowel_idx = i;
            break;
        }
    }

    if (closest_vowel_idx == -1) {
        return "";
    }

    return string(1, word[closest_vowel_idx]);
}