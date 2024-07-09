string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.length();
    for(int i=n-1; i>0; i--){
        if(vowels.find(word[i]) != string::npos){
            return word.substr(i);
        }
    }
    return "";
}