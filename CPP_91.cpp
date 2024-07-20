int is_bored(string S){
    int boredom_count = 0;
    string sentence = "";
    
    for(int i = 0; i < S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(sentence.length() > 2 && sentence[0] == 'I'){
                boredom_count++;
            }
            sentence = "";
        }
        else{
            sentence += S[i];
        }
    }
    
    return boredom_count;
}