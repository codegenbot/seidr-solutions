string vowels = "aeiouAEIOU";
    int n = word.length();
    for(int i = n-2; i > 0; i--){
        if(word[i] != ' ' && vowels.find(word[i]) != string::npos && word[i-1] != ' ' && word[i+1] != ' ' && !isalpha(word[i-1]) && !isalpha(word[i+1])){
            return string(1, word[i]);
        }
    }
    return "";
}