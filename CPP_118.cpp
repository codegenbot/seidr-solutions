string vowels = "AEIOUaeiou";
    int closest_distance = word.length();
    string closest_vowel = "";
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i + 1; j < word.length(); j++) {
                if (vowels.find(word[j]) == string::npos) {
                    int distance = j - i;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_vowel = word[i];
                    }
                    break;
                }
            }
        }
    }
    
    return closest_vowel;
}