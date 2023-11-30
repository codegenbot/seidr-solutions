int is_bored(string S){
    int boredomCount = 0;
    bool isSentenceStart = true;

    for(int i = 0; i < S.length(); i++){
        if(isSentenceStart && S[i] == 'I'){
            boredomCount++;
        }
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            isSentenceStart = true;
        } else {
            isSentenceStart = false;
        }
    }

    return boredomCount;
}