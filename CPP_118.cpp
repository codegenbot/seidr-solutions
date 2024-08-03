string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = '\0';
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            closest_vowel = word[i];
            break;
        }
    }
    
    if (closest_vowel == '\0') {
        return "";
    }
    
    return string(1, closest_vowel);
}