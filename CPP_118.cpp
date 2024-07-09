string vowels = "AEIOUaeiou";
    string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
    int closest_distance = word.size();
    char closest_vowel = ' ';
    
    for (int i = word.size() - 2; i > 0; --i) {
        if (consonants.find(word[i]) != string::npos) {
            for (int j = 0; j < vowels.size(); ++j) {
                if (word[i] < vowels[j] && abs(i - closest_distance) < closest_distance) {
                    closest_distance = abs(i - closest_distance);
                    closest_vowel = vowels[j];
                }
            }
        }
    }
    
    return closest_vowel == ' ' ? "" : string(1, closest_vowel);
}