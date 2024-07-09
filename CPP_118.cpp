string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isupper(word[i]) && !islower(word[i]))
            return "";
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
            word[i] == 'U')
            return (char)word[i];
    }
    return "";
}