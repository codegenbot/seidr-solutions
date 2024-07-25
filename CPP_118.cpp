string get_closest_vowel(string word) {
    string result = "";
    for(int i = word.length() - 1; i >= 0; i--) {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U') {
            for(int j = i - 1; j >= 0; j--) {
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && 
                   word[j] != 'o' && word[j] != 'u' && word[j] != 'A' && 
                   word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && 
                   word[j] != 'U') {
                    result = word.substr(j + 1, i - j - 1);
                    return result;
                }
            }
        }
    }
    return result;
}