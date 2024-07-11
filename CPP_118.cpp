string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    string closest_vowel = "";
    
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i + 1; j < word.size() - 1; ++j) {
                if (vowels.find(word[j]) == string::npos) {
                    closest_vowel = word[i];
                    break;
                }
            }
            break;
        }
    }
    
    return closest_vowel;
}