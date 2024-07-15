int is_bored(string S){
    int boredom_count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (pos == 0 || S[pos-1] == '.' || S[pos-1] == '?' || S[pos-1] == '!') {
            boredom_count++;
        }
        pos++;
    }
    return boredom_count;
}