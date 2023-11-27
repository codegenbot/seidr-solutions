int is_bored(string S){
    int count = 0;
    bool prev_period = false;
    bool prev_question = false;
    bool prev_exclamation = false;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')) {
            if (i + 1 < S.length() && (S[i+1] == ' ' || S[i+1] == '.' || S[i+1] == '?' || S[i+1] == '!')) {
                count++;
            }
        }
    }
    
    return count;
}