int is_bored(string S) {
    int count = 0;
    bool bored = false;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')) {
            bored = true;
        } else if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            bored = false;
        }
        if (bored) {
            count++;
        }
    }
    return count;
}