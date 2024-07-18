int is_bored(string S){
    int boredom_count = 0;
    bool prev_is_i = false;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            prev_is_i = false;
        } else if (prev_is_i && c == ' ') {
            boredom_count++;
            prev_is_i = false;
        } else if (!prev_is_i && c == 'I') {
            prev_is_i = true;
        }
    }
    return boredom_count;
}