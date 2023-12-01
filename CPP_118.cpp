string get_closest_vowel(string word){
    int n = word.length();
    string vowels = "aeiouAEIOU";
    for(int i=n-3; i>=1; i--){
        if(word[i-1] != ' ' && word[i+1] != ' ' && vowels.find(word[i]) != string::npos){
            return string(1, word[i]);
        }
    }
    return "";
}