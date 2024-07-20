int is_bored(string S){
    int count = 0;
    bool is_i = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '!' || S[i - 1] == '?')) {
            is_i = true;
        }
        if ((S[i] == '.' || S[i] == '!' || S[i] == '?') && is_i) {
            count++;
            is_i = false;
        }
    }
    return count;
}