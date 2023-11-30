int is_bored(string S){
    int boredomCount = 0;
    int i = 0;
    while (i < S.length()) {
        if (S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')) {
            boredomCount++;
        }
        i++;
    }
    return boredomCount;
}