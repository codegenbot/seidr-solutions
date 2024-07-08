int is_bored(string S){
    int count = 0;
    string sentence;
    for(int i=0; i<S.size(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            sentence = S.substr(0, i);
            if(sentence.find("I") == 0) count++;
            S.erase(0, i+1);
        }
    }
    return count;
}