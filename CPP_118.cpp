string get_closest_vowel(string word){
    for(int i = word.size() - 1; i >= 0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            for(int j = i - 1; j >= 0; j--){
                if(!isVowel(word[j])){
                    return (word[i] >= 'a' && word[i] <= 'z') ? to_string(word[i]) : "U";
                }
            }
        }
    }
    return "";
}

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}