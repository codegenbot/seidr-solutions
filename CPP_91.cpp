int is_bored(string S){
    int count = 0;
    bool is_boredom = false;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            is_boredom = false;
        } else if (is_boredom && S[i] == 'I' && (i == 0 || S[i - 1] == ' ')) {
            count++;
            is_boredom = false;
        } else if (!is_boredom && S[i] == 'I' && (i == 0 || S[i - 1] == ' ')) {
            is_boredom = true;
        }
    }
    return count;
}