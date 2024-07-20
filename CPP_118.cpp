string get_closest_vowel(string word){
    string vowels = "AEIOUaeiou";
    int right_consonant = 0;
    for(int i = word.size() - 2; i > 0; i--){
        if(vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        }
        if(isalpha(word[i]) && vowels.find(word[i]) == string::npos){
            right_consonant++;
        }
        if(right_consonant == 2){
            break;
        }
    }
    return "";
}