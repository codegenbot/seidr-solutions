int is_bored(string S){
    int count = 0;
    bool newSentence = true;
    
    for (int i = 0; i < S.size(); i++) {
        if (newSentence && S[i] == 'I') {
            count++;
            newSentence = false;
        }
        
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            newSentence = true;
        }
    }
    
    return count;
}