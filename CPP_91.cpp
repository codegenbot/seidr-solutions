int is_bored(string S) {
    int count = 0;
    bool new_sentence = true;
    for (char c : S) {
        if (new_sentence && c == 'I') {
            count++;
        }
        new_sentence = (c == '.' || c == '?' || c == '!');
    }
    return count;
}