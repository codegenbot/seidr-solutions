int boredom = 0;
    int n = S.size();
    for(int i=0; i<n; ++i){
        if(i == 0 || (S[i-1] == '.' || S[i-1] == '!' || S[i-1] == '?') && S[i] == 'I'){
            boredom++;
        }
    }
    return boredom;
}