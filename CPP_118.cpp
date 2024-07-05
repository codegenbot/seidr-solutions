string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && 
            consonants.find(word[i-1]) != string::npos &&
            consonants.find(word[i+1]) != string::npos) {
            return string(1, word[i]);
        }
    }
    return "";
}