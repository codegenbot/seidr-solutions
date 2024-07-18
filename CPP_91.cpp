int is_bored(string S){
    int boredom_count = 0;
    bool is_previous_i = false;
    
    for(int i = 0; i < S.length(); ++i){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            is_previous_i = false;
        } else if(S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')){
            is_previous_i = true;
        } else if(is_previous_i && S[i] == ' '){
            ++boredom_count;
            is_previous_i = false;
        }
    }

    return boredom_count;
}