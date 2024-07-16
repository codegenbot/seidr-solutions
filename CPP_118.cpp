for(int i = word.length() - 2; i > 0; --i){
    if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
        return string(1, word[i]);
    }
}
return "";
}