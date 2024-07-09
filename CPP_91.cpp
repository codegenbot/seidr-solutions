int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == ' ' || pos == 0 || (S[pos - 1] == '.' || S[pos - 1] == '?' || S[pos - 1] == '!')) {
            count++;
        }
        pos += 1;
    }
    return count;
}