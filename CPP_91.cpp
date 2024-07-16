int is_bored(string S){
    int count = 0;
    bool is_i_present = false;
    for(int i = 0; i < S.length(); ++i){
        if(S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')){
            is_i_present = true;
        }
        if((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_i_present){
            count++;
            is_i_present = false;
        }
    }
    return count;
}