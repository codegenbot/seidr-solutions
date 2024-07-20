char get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int right_consonant_idx = -1;
    
    for (int i = word.length() - 2; i >= 1; i--) {
        if (vowels.find(word[i]) == string::npos) {
            right_consonant_idx = i;
            break;
        }
    }
    
    if (right_consonant_idx != -1) {
        for (char c : vowels) {
            if (word.find(c, right_consonant_idx) != string::npos) {
                return c;
            }
        }
    }
    
    return '\0';
}