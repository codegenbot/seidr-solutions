int boredom_count = 0;
    bool is_sentence_start = true;
    
    for (int i = 0; i < S.size(); ++i) {
        if (is_sentence_start && S[i] == 'I') {
            boredom_count++;
        }
        
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            is_sentence_start = true;
        } else {
            is_sentence_start = false;
        }
    }
    
    return boredom_count;
}