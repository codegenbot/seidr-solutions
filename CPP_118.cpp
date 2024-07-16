string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    int n = word.length();
    for(int i=n-2; i>0; i--){
        if(vowels.find(word[i]) != string::npos){
            if(word[i-1] != 'a' && word[i-1] != 'e' && word[i-1] != 'i' && word[i-1] != 'o' && word[i-1] != 'u' && 
               word[i+1] != 'a' && word[i+1] != 'e' && word[i+1] != 'i' && word[i+1] != 'o' && word[i+1] != 'u'){
                return string(1, word[i]);
            }
        }
    }
    return "";
}