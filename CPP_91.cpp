int is_bored(string S) {
    int count = 0;
    bool startOfSentence = true;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')) {
            startOfSentence = true;
        }
        
        if (startOfSentence && (S[i] == '.' || S[i] == '?' || S[i] == '!')) {
            count++;
            startOfSentence = false;
        }
    }
    
    return count;
}