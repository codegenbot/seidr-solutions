string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>=0; --i){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            for(int j=i+1; j<n; ++j){
                if(word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u' ||
                   word[j] == 'A' || word[j] == 'E' || word[j] == 'I' || word[j] == 'O' || word[j] == 'U'){
                    for(int k=j+1; k<n; ++k){
                        if(word[k] == 'a' || word[k] == 'e' || word[k] == 'i' || word[k] == 'o' || word[k] == 'u' ||
                           word[k] == 'A' || word[k] == 'E' || word[k] == 'I' || word[k] == 'O' || word[k] == 'U'){
                            return string(1,word[i]);
                        }
                    }
                } else {
                    return string(1,word[i]);
                }
            }
        }
    }
    return "";
}