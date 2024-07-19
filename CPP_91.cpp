int is_bored(string S){
    int count = 0;
    bool is_bored = false;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_bored = true;
        }
        if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_bored) {
            count++;
            is_bored = false;
        }
    }
    return count;
}