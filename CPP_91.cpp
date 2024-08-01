int is_bored(string S) {
    int boredom_count = 0;
    size_t prev_pos = 0;
    for (size_t i = 0; i < S.size(); ++i) {
        if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && 
            S.substr(prev_pos, i - prev_pos).find("I") == 0) {
            boredom_count++;
        }
        prev_pos = i + 1;
    }
    return boredom_count;
}