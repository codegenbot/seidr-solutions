string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int idx = -1;
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i+1]) && !isalpha(word[i-1])) {
            idx = i;
            break;
        }
    }
    return idx != -1 ? string(1, word[idx]) : "";
}