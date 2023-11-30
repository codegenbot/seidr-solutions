int is_bored(string S){
    int count = 0;
    int n = S.length();
    for (int i = 0; i < n; i++) {
        if (S[i] == 'I') {
            if ((i == 0) || (S[i - 1] == ' ') || (S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
                count++;
            }
        }
    }
    return count;
}