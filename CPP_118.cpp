string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int len = word.length();
    for(int i = len-3; i >= 1; i--){
        if(vowels.find(word[i]) != string::npos && !isVowel(word[i-1]) && !isVowel(word[i+1])){
            return string(1, word[i]);
        }
    }
    return "";
}