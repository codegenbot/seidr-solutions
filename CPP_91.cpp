int is_bored(string S){
    int count = 0;
    bool is_sentence_start = true;
    for (char c : S) {
        if (is_sentence_start && c == 'I') {
            count++;
        }
        is_sentence_start = (c == '.' || c == '?' || c == '!');
    }
    return count;
}