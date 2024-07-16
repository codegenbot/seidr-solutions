int is_bored(string S){
    int count = 0;
    bool is_bored = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_bored = true;
        } else if (is_bored && (S[i] == '.' || S[i] == '?' || S[i] == '!')) {
            count++;
            is_bored = false;
        }
    }
    return count;
}