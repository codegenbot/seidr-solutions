string get_closest_vowel(string word){
    int n = word.size();
    for(int i=n-1; i>0; --i){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            for(int j=i-1; j>=0; --j){
                if(!isVowel(word[j])){
                    return word.substr(j+1, i-j-1);
                }
            }
        }
    }
    return "";
}