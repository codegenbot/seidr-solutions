int is_bored(string S){
    int count = 0;
    bool isI = false;
    for (int i = 0; i < S.length(); ++i) {
        if (i == 0 || (S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!') && S[i] == 'I') {
            isI = true;
        }
        if (isI && (S[i] == '.' || S[i] == '?' || S[i] == '!')) {
            count++;
            isI = false;
        }
    }
    return count;
}