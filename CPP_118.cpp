string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int size = word.size();
    for (int i = size - 3; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos && isalpha(word[i - 1]) && !vowels.find(word[i - 1]) && isalpha(word[i - 2])) {
            return string(1, word[i]);
        }
    }
    return "";
}