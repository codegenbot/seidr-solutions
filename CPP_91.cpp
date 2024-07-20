int is_bored(string S){
    int boredom_count = 0;
    bool prev_was_i = false;

    for (char c : S) {
        if (c == 'I' && (prev_was_i || prev_was_i && (c == '.' || c == '?' || c == '!'))) {
            boredom_count++;
        }
        prev_was_i = (c == '.' || c == '?' || c == '!') ? false : (c == 'I');
    }

    return boredom_count;
}