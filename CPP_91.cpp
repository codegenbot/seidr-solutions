int is_bored(string S){
    int boredomCount = 0;
    bool sentenceStart = true;
    
    for(int i = 0; i < S.length(); i++){
        if(S[i] == 'I' && sentenceStart){
            boredomCount++;
        }
        
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            sentenceStart = true;
        }
        else{
            sentenceStart = false;
        }
    }
    
    return boredomCount;
}