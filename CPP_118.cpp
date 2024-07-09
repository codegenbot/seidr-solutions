string get_closest_vowel(string word) {
    int n = word.length();
    for(int i=n-1; i>=0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            if(i > 0 && (word[i-1] < 'a' || word[i-1] > 'z') &&
               (i+1 < n && (word[i+1] < 'a' || word[i+1] > 'z'))){
                return string(1, word[i]);
            }
        }
    }
    return "";
}