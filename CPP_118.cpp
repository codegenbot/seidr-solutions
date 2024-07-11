string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int right_consonant = 0;
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            return word.substr(i, 1);
        } else if (isalpha(word[i])) {
            right_consonant++;
        }
        if (right_consonant == 2) {
            return "";
        }
    }
    return "";
}