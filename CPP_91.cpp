int is_bored(string S){
    int count = 0;
    int length = S.length();
    
    if(length == 0)
        return count;
    
    if(S[0] == 'I')
        count++;
    
    for(int i=0; i<length; i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(i+1 < length && S[i+1] == 'I')
                count++;
        }
    }
    
    return count;
}