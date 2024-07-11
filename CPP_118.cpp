string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
    
    size_t start = 0;
    size_t end = word.size() - 1;
    
    while (start < end) {
        if (consonants.find(word[end]) != string::npos && vowels.find(word[end]) != string::npos && consonants.find(word[end - 1]) != string::npos) {
            return string(1, word[end]);
        }
        end--;
    }
    
    return "";
}