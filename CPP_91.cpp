int is_bored(string S){
    int count = 0;
    int n = S.length();
    
    if(S[0] == 'I')
        count++;
    
    for(int i = 1; i < n-1; i++){
        if((S[i] == '.' || S[i] == '?' || S[i] == '!') && S[i+1] == ' ' && S[i+2] == 'I')
            count++;
    }
    
    return count;
}