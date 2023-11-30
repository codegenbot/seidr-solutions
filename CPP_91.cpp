int is_bored(string S){
    int count = 0;
    int i = 0;
    while(i < S.length()){
        if(S[i] == 'I'){
            if(i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!'){
                count++;
            }
        }
        i++;
    }
    return count;
}