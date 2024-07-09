int is_bored(string S){
    int count = 0;
    bool isI = false;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            isI = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && isI) {
            count++;
            isI = false;
        }
    }
    return count;
}