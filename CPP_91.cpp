int is_bored(string S){
    int boredom_count = 0;
    bool is_i_found = false;
    
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_i_found = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_i_found) {
            boredom_count++;
            is_i_found = false;
        }
    }
    
    return boredom_count;
}