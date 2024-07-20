string vowels = "aeiouAEIOU";
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    string result = "";
    
    for (int i = word.length() - 2; i > 0; --i) {
        if (consonants.find(word[i]) != string::npos && vowels.find(word[i - 1]) != string::npos && consonants.find(word[i - 2]) != string::npos) {
            result += word[i - 1];
            break;
        }
    }
    
    return result;
}