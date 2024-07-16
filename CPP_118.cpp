string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    int right_consonant = 0;
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        } else if (isalpha(word[i])) {
            right_consonant++;
        }
        if (right_consonant == 2) {
            break;
        }
    }
    return "";
}