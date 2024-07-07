int is_bored(string S){
    int count = 0;
    string word;
    for(int i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(word.find("I") != string::npos)
                count++;
            word.clear();
        }else{
            word += S[i];
        }
    }
    if(word.find("I") != string::npos)
        count++;
    return count;
}