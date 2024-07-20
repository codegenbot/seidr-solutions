int is_bored(string S){
    int boredomCount = 0;
    int length = S.length();
    for (int i = 0; i < length; ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            boredomCount++;
        }
    }
    return boredomCount;
}