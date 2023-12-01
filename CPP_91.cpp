int is_bored(string S){
    int count = 0;
    bool isPreviousSentenceBoredom = false;
    
    for(int i=0; i<S.length(); i++){
        if(S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')){
            isPreviousSentenceBoredom = true;
        }
        
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            isPreviousSentenceBoredom = false;
        }
        
        if(isPreviousSentenceBoredom){
            count++;
        }
    }
    
    return count;
}