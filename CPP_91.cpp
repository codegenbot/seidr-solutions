int is_bored(string S){
    int count = 0;
    int length = S.length();
    
    if(S[0] == 'I'){
        count++;
    }
    
    for(int i=0; i<length; i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(S[i+1] == 'I'){
                count++;
            }
        }
    }
    
    return count;
}