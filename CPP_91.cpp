int is_bored(string S){
    int boredom_count = 0;
    string sentence;
    for(size_t i=0; i<S.size(); i++){
        if((S[i] == '.' || S[i] == '?' || S[i] == '!') && S.substr(0, i).find("I") == 0){
            boredom_count++;
        } else if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            sentence = S.substr(0, i);
            if(sentence.find("I") == 0){
                boredom_count++;
            }
            S.erase(0, i+1);
            i=-1;
        }
    }
    return boredom_count;
}