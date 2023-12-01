int is_bored(string S){
    int count = 0;
    bool start = true;

    for(int i = 0; i < S.length(); i++){
        if(start && S[i] == 'I'){
            count++;
            start = false;
        }

        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            start = true;
        }
    }

    return count;
}