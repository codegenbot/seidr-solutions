int is_bored(string S){
    int boredom_count = 0;
    bool is_i_started = false;
    
    for (char &c : S) {
        if (is_i_started && (c == ' ' || c == '.' || c == '?' || c == '!')) {
            boredom_count++;
            is_i_started = false;
        } else if (c == 'I') {
            is_i_started = true;
        }
    }
    
    return boredom_count;
}