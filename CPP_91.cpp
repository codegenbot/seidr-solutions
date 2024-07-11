int count = 0;
    bool is_boring = false;
    
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')) {
            is_boring = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_boring) {
            count++;
            is_boring = false;
        }
    }
    
    return count;
}