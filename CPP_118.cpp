string vowels = "AEIOUaeiou";
    string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
    int closest_vowel_pos = -1;
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (consonants.find(word[i]) != string::npos && vowels.find(word[i+1]) != string::npos && consonants.find(word[i-1]) != string::npos) {
            closest_vowel_pos = i+1;
            break;
        }
    }
    
    if (closest_vowel_pos != -1) {
        return string(1, word[closest_vowel_pos]);
    } else {
        return "";
    }
}