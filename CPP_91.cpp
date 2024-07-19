int is_bored(string S){
    int count = 0;
    for (size_t i = 0; i < S.length(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            count++;
        }
    }
    return count;
}