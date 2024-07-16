string vowels = "aeiouAEIOU";
    string result = "";
    bool foundConsonant = false;
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            if (foundConsonant) {
                result = word[i];
                break;
            }
        } else {
            foundConsonant = true;
        }
    }
    
    return result;
}