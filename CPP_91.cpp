int is_bored(string S){
    int count = 0;
    string word;
    bool boredom = false;

    for(int i=0; i<S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(i > 0 && S.substr(0, i).find("I") != std::string::npos){
                boredom = true;
            }
            if(boredom) count++;
            boredom = false;
        }
    }

    return count;
}