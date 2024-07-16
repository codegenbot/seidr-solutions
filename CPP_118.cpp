string vowels = "AEIOUaeiou";
    int last_consonant_index = -1;
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) == string::npos) {
            last_consonant_index = i;
            break;
        }
    }
    
    if (last_consonant_index == -1) {
        return "";
    }
    
    for (int i = last_consonant_index - 1; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        }
    }
    
    return "";
}