string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    for(int i = word.size() - 2; i > 0; --i) {
        if(vowels.find(word[i]) != string::npos && 
           !(vowels.find(word[i-1]) != string::npos) && 
           !(vowels.find(word[i+1]) != string::npos)) {
            return string(1, word[i]);
        }
    }
    return "";
}