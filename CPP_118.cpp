string vowels = "AEIOUaeiou";
    int prevConsonant = -1;
    string result = "";
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            if (prevConsonant != -1) {
                result = word[i];
                break;
            }
        } else if (isalpha(word[i])) {
            prevConsonant = i;
        }
    }
    
    return result;
}