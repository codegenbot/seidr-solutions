int is_bored(string S){
    int boredomCount = 0;
    bool sentenceStartsWithI = false;

    for(int i = 0; i < S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            sentenceStartsWithI = false;
        }
        else if(S[i] == 'I' && (i == 0 || S[i-1] == ' ')){
            sentenceStartsWithI = true;
        }
        else if(sentenceStartsWithI && S[i] == ' '){
            boredomCount++;
            sentenceStartsWithI = false;
        }
    }

    return boredomCount;
}