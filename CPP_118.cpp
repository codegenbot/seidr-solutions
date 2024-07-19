string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int len = word.length();
    
    for (int i = len - 3; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !islower(word[i-1]) && !islower(word[i+1])) {
            return string(1, word[i]);
        }
    }
    
    return "";
}