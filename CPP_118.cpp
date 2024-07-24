string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for(int i = word.size() - 1; i >= 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            return word.substr(i, 1);
        }
    }
    return "";
}