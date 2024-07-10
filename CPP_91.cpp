int is_bored(string S){
    int boredom_count = 0;
    string sentence;
    for(int i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(sentence.find("I") != string::npos){
                boredom_count++;
            }
            sentence.clear();
        } else {
            sentence += S[i];
        }
    }
    return boredom_count;
}