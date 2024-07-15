int is_bored(string S){
    int boredom_count = 0;
    for(int i=0; i<S.size(); ++i){
        if(i == 0 && S[i] == 'I'){
            boredom_count++;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && i < S.size()-1 && S[i+1] == 'I') {
            boredom_count++;
        }
    }
    return boredom_count;
}