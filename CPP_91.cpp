int is_bored(string S){
    int count = 0;
    bool is_prev_i = false;
    
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_prev_i = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_prev_i) {
            count++;
            is_prev_i = false;
        }
    }
    
    return count;
}