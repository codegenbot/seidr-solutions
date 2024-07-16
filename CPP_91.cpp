int is_bored(string S){
    int count = 0;
    bool isBored = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            isBored = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && isBored) {
            count++;
            isBored = false;
        }
    }
    if (isBored) {
        count++;
    }
    return count;
}