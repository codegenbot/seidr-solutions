int is_bored(string S){
    int count = 0;
    int len = S.length();
    
    if (len == 0) {
        return count;
    }
    
    if (S[0] == 'I') {
        count++;
    }
    
    for (int i = 1; i < len; i++) {
        if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && (i + 1 < len) && S[i + 1] == 'I') {
            count++;
        }
    }
    
    return count;
}