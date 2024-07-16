string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int diff = INT_MAX;
    char closest_vowel = '\0';
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i + 1; j < word.size() - 1; j++) {
                if (vowels.find(word[j]) == string::npos) {
                    if (j - i < diff) {
                        closest_vowel = word[i];
                        diff = j - i;
                    }
                    break;
                }
            }
        }
    }
    
    if (closest_vowel == '\0') {
        return "";
    } else {
        return string(1, closest_vowel);
    }
}