int is_bored(string S){
    int count = 0;
    int n = S.length();
    
    if(n == 0)
        return count;
    
    if(S[0] == 'I')
        count++;
    
    for(int i = 1; i < n; i++){
        if((S[i] == '.' || S[i] == '?' || S[i] == '!') && S[i-1] == 'I')
            count++;
    }
    
    return count;
}