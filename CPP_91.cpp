int is_bored(string S){
    int boredomCount = 0;
    bool isPreviousI = false;
    
    for(int i = 0; i < S.length(); i++){
        if(S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')){
            isPreviousI = true;
        }
        else if(isPreviousI && (S[i] == '.' || S[i] == '?' || S[i] == '!')){
            boredomCount++;
            isPreviousI = false;
        }
    }
    
    return boredomCount;
}