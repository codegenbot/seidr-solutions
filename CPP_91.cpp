int is_bored(string S){
    int boredom = 0;
    size_t pos = 0;
    
    while((pos = S.find("I ", pos)) != string::npos) {
        if(pos == 0 || S[pos-1] == '.' || S[pos-1] == '?' || S[pos-1] == '!') {
            boredom++;
        }
        pos++;
    }
    
    return boredom;
}