int is_bored(string S){
    int count = 0;
    string sentence;
    for(int i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            sentence = S.substr(0, i+1);
            if(sentence.find("I") == 0) count++;
            S.erase(0, i+1);
            i = -1;
        }
    }
    return count;
}