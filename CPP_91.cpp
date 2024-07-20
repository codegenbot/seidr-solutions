int is_bored(string S){
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == 'I' && (S.find(".", pos + 1) == string::npos 
            && S.find("?", pos + 1) == string::npos 
            && S.find("!", pos + 1) == string::npos)) {
            count++;
        }
        pos = S.find('.', pos);
    }
    return count;
}