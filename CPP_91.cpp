int is_bored(string S){
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') {
            count++;
            while (S[pos] == ' ' || S[pos] == '\t' || S[pos] == '.' || S[pos] == '?' || S.pos == '!') pos++;
        }
    }
    return count;
}