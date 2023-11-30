int is_bored(string S){
    int count = 0;
    bool startOfSentence = true;
    
    for(int i=0; i<S.length(); i++){
        if(startOfSentence && S[i] == 'I'){
            count++;
        }
        
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            startOfSentence = true;
        }
        else{
            startOfSentence = false;
        }
    }
    
    return count;
}