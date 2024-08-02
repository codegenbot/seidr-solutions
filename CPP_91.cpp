int is_bored(string S){
    int boredom_count = 0;
    string sentence;
    for(int i=0; i<S.size(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(sentence.size() > 2 && sentence.substr(0,3)=="I am")
                boredom_count++;
            sentence = "";
        } else {
            sentence += S[i];
        }
    }
    return boredom_count;
}