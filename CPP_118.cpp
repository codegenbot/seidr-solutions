string get_closest_vowel(string word){
    int n = word.length();
    for(int i = n-2; i > 0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            if(word[i-1] != 'a' && word[i-1] != 'e' && word[i-1] != 'i' && word[i-1] != 'o' && word[i-1] != 'u' && word[i-1] != 'A' && word[i-1] != 'E' && word[i-1] != 'I' && word[i-1] != 'O' && word[i-1] != 'U' && word[i+1] != 'a' && word[i+1] != 'e' && word[i+1] != 'i' && word[i+1] != 'o' && word[i+1] != 'u' && word[i+1] != 'A' && word[i+1] != 'E' && word[i+1] != 'I' && word[i+1] != 'O' && word[i+1] != 'U'){
                return string(1, word[i]);
            }
        }
    }
    return "";
}