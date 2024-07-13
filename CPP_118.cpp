string get_closest_vowel(string word){
    int n = word.size();
    string result = "";
    for(int i=n-1; i>0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U'){
            int left = i-1;
            while(left > 0 && !ispunct(word[left]) && !isalpha(word[left]))
                left--;
            if(left > 0 && isalpha(word[left])){
                result = word.substr(left+1, i-left-1);
                return result;
            }
        }
    }
    return "";
}