int is_bored(string S){
    int count = 0;
    bool sentence_start = true;
    for(int i = 0; i < S.length(); i++){
        if(sentence_start && S[i] == 'I'){
            count++;
        }
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            sentence_start = true;
        }
        else{
            sentence_start = false;
        }
    }
    return count;
}