int is_bored(string S){
    int boredoms = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') {
            boredoms++;
            pos += 1; // skip the punctuation
            while (pos < S.length() && (S[pos] == ' ' || S[pos] == '\t')) {
                pos++; // skip spaces and tabs
            }
        } else {
            pos++; // move to next character
        }
    }
    return boredoms;
}