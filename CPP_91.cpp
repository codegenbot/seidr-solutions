int is_bored(string S){
    int count = 0;
    string word;
    for(size_t i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(word.size() > 1 && tolower(word[0]) == 'i'){
                count++;
            }
            word = "";
        }else{
            word += S[i];
        }
    }
    return count;
}