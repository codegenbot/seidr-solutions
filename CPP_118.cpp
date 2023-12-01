string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    int n = word.length();
    int i = n - 2;
    while (i >= 1) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])) {
            return string(1, word[i]);
        }
        i--;
    }
    return "";
}