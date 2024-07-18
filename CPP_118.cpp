string vowels = "AEIOUaeiou";
    string result = "";
    int rightConsonantIndex = -1;
    
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            result = word[i];
            break;
        }
        if (isalpha(word[i]) && vowels.find(word[i]) == string::npos) {
            rightConsonantIndex = i;
            break;
        }
    }
    
    if (rightConsonantIndex == -1) {
        return "";
    }
    
    return result;
}