int is_bored(string S){
    int count = 0;
    bool isSentenceStart = true;
    for (char &c : S) {
        if (isSentenceStart && c == 'I') {
            count++;
        }
        isSentenceStart = c == '.' || c == '!' || c == '?';
    }
    return count;
}