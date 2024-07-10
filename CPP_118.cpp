string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) {
            break;
        }
        ++left;
    }
    
    string result;
    bool found = false;
    for (int i = left - 1; i >= 0; --i) {
        if (isvowel(word[i])) {
            result = word.substr(i, 1);
            found = true;
            break;
        }
    }
    
    return found ? result : "";
}