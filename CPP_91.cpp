int is_bored(string S){
    int boredom_count = 0;
    string word;
    for(int i = 0; i < S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(i > 0 && S.substr(0, i).find("I") != string::npos){
                boredom_count++;
            }
            word.clear();
        }else{
            word += S[i];
        }
    }
    return boredom_count;
}