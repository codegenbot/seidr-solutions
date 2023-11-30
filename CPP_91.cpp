int is_bored(string S){
    int count = 0;
    bool is_sentence_start = true;

    for(int i = 0; i < S.length(); i++){
        // Check if it's the start of a sentence
        if(is_sentence_start && S[i] == 'I'){
            count++;
        }

        // Check if it's the end of a sentence
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            is_sentence_start = true;
        }
        else{
            is_sentence_start = false;
        }
    }

    return count;
}