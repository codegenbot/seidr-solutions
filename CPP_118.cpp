string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    int n = word.size();
    int rightConsonant = -1;
    for (int i = n - 1; i >= 1; --i) {
        if (vowels.find(word[i]) != string::npos) {
            rightConsonant = i - 1;
            break;
        }
    }
    
    if (rightConsonant == -1) {
        return "";
    }
    
    for (int j = rightConsonant; j >= 1; --j) {
        if (vowels.find(word[j]) != string::npos) {
            return string(1, word[j]);
        }
    }
    return "";
}