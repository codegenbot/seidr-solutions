int is_vowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.size();
    int i = n - 2;
    while(i >= 0 && !is_vowel(word[i])) i--;
    while(i >= 0 && is_vowel(word[i])) i--;
    while(i >= 0 && !is_vowel(word[i])) i--;
    if(i < 0) return "";
    return string(1, word[i]);
}