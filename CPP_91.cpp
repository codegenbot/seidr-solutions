int is_bored(string S){
    int boredomCount = 0;
    int length = S.length();
    
    if (length == 0) {
        return boredomCount;
    }
    
    if (S[0] == 'I') {
        boredomCount++;
    }
    
    for (int i = 1; i < length; i++) {
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            if (i + 1 < length && S[i + 1] == 'I') {
                boredomCount++;
            }
        }
    }
    
    return boredomCount;
}