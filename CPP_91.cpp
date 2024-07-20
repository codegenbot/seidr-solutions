int is_bored(string S){
    int count = 0;
    bool is_boredom = false;
    for(size_t i = 0; i < S.size(); ++i){
        if(is_boredom && (S[i] == '.' || S[i] == '?' || S[i] == '!')){
            count++;
            is_boredom = false;
        }
        else if(!is_boredom && S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')){
            is_boredom = true;
        }
    }
    return count;
}