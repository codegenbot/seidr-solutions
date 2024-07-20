int is_bored(string S){
    int count = 0;
    bool in_sentence = false;

    for (char c : S) {
        if (c == ' ') {
            in_sentence = false;
        } else if (c == '.' || c == '?' || c == '!') {
            in_sentence = false;
        } else if (in_sentence && c == 'I') {
            count++;
            in_sentence = false;
        } else if (c == 'I') {
            in_sentence = true;
        }
    }

    return count;
}