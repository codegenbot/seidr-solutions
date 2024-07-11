int is_bored(string S){
    int boredom_count = 0;
    bool is_i_present = false;
    
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_i_present = true;
        }
        
        if (is_i_present && (S[i] == '.' || S[i] == '?' || S[i] == '!')) {
            boredom_count++;
            is_i_present = false;
        }
    }
    
    return boredom_count;
}