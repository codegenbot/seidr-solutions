int is_bored(string S){
    int boredom_count = 0;
    bool is_sentence = false;

    for(size_t i = 0; i < S.size(); ++i){
        if(is_sentence && (S[i] == '.' || S[i] == '?' || S[i] == '!')){
            if(S.substr(i-1, 2) == "I "){
                boredom_count++;
            }
            is_sentence = false;
        }
        if(S[i] == 'I' && (i == 0 || S[i-1] == ' ')){
            is_sentence = true;
        }
    }

    return boredom_count;
}