int is_bored(string S){
    int count = 0;
    bool start_of_sentence = true;
    
    for(int i = 0; i < S.length(); i++){
        if(start_of_sentence && S[i] == 'I'){
            count++;
            start_of_sentence = false;
        }
        
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            start_of_sentence = true;
        }
    }
    
    return count;
}