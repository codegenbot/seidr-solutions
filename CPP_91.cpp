int is_bored(string S){
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == 'I' && (S.find('.', pos) == string::npos &&
            S.find('?', pos) == string::npos && S.find('!', pos) == string::npos))
            count++;
        pos++;
    }
    return count;
}