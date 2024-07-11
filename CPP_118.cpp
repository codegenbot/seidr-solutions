string vowels = "AEIOUaeiou";
    string result = "";
    bool foundConsonant = false;
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            if (foundConsonant) {
                result = word[i];
                break;
            }
        } else if (isalpha(word[i])) {
            foundConsonant = true;
        }
    }
    
    return result;
}