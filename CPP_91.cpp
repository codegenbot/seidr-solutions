int is_bored(string S){
    int count = 0;
    bool is_start_of_sentence = true;
    
    for (char c : S) {
        if (is_start_of_sentence && c == 'I') {
            count++;
        }
        
        if (c == '.' || c == '?' || c == '!') {
            is_start_of_sentence = true;
        } else {
            is_start_of_sentence = false;
        }
    }
    
    return count;
}